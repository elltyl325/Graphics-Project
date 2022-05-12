#include "AABoundingBox.h"

AABoundingBox::AABoundingBox(){
    neverSet = true;
    centroid = sivelab::Vector3D((minPt[0] + maxPt[0]) / 2, 
                                     (minPt[1] + maxPt[1]) / 2,
                                     (minPt[2] + maxPt[2]) / 2);

}

void AABoundingBox::updateCentroid(){
    centroid = sivelab::Vector3D((minPt[0] + maxPt[0]) / 2, 
                                     (minPt[1] + maxPt[1]) / 2,
                                     (minPt[2] + maxPt[2]) / 2);
}
void AABoundingBox::update(const sivelab::Vector3D &pt){
    neverSet = false;
    update(pt[0], pt[1], pt[2]);
}

void AABoundingBox::update(double x, double y, double z){
    neverSet = false;
    if(x > maxPt[0]) maxPt[0] = x;
    if(y > maxPt[1]) maxPt[1] = y;
    if(z > maxPt[2]) maxPt[2] = z;

    if(x < minPt[0]) minPt[0] = x;
    if(y < minPt[1]) minPt[1] = y;
    if(z < minPt[2]) minPt[2] = z;

    double e = 1.0e-6;
    for(int i=0; i<3; i++){
        if( ((maxPt[i] + e) > minPt[i]) && ((maxPt[i] - e) < minPt[i])){
            maxPt[i] += e;
            minPt[i] -= e;
        }
    }
    updateCentroid();
}

void AABoundingBox::Union(const AABoundingBox &aabb){
    if(!neverSet){
        update(aabb.maxPt);
        update(aabb.minPt);
    }
}


bool AABoundingBox::intersect(const Ray&r){
    double xmin = minPt[0];
    double ymin = minPt[1];
    double zmin = minPt[2];

    double xmax = maxPt[0];
    double ymax = maxPt[1];
    double zmax = maxPt[2];

    double t_xmin, t_xmax, t_ymin, t_ymax, t_zmin, t_zmax;

    double a = 1.0/r.dir[0];
    if(a >= 0.0) {
        t_xmin = a * (xmin - r.origin[0]);
        t_xmax = a * (xmax - r.origin[0]);
    }
    else{
        t_xmin = a * (xmax - r.origin[0]);
        t_xmax = a * (xmin - r.origin[0]);
    }

    a = 1.0/r.dir[1];
    if(a >= 0.0) {
        t_ymin = a * (ymin - r.origin[1]);
        t_ymax = a * (ymax - r.origin[1]);
    }
    else{
        t_ymin = a * (ymax - r.origin[1]);
        t_ymax = a * (ymin - r.origin[1]);
    }

    a = 1.0/r.dir[2];
    if(a >= 0.0) {
        t_zmin = a * (zmin - r.origin[2]);
        t_zmax = a * (zmax - r.origin[2]);
    }
    else{
        t_zmin = a * (zmax - r.origin[2]);
        t_zmax = a * (zmin - r.origin[2]);
    }

    if( (t_xmin > t_ymax) || (t_ymin > t_xmax) || 
        (t_xmin > t_zmax) || (t_zmin > t_xmax) ||
        (t_ymin > t_zmax) || (t_zmin > t_ymax) ){
        return false;
        }
    else{
        return true;
    }
}
