#include "BVHNode.h"

BVHNode::BVHNode(std::vector<Shape*> &shapeVec, int axis){
    std::vector<Shape*> leftChildVec;
    std::vector<Shape*> rightChildVec;
    if(shapeVec.size() == 0){
        leftChild = nullptr;
        rightChild = nullptr;
    }
    else if(shapeVec.size() == 1){
        leftChild = shapeVec[0];
        rightChild = nullptr;
        aabbox = shapeVec[0]->aabbox;
    }
    else if (shapeVec.size() == 2){
        leftChild = shapeVec[0];
        rightChild = shapeVec[1];
        aabbox.Union(leftChild->aabbox);
        aabbox.Union(rightChild->aabbox);
    }
    else{

        for( int j = 0; j < shapeVec.size(); j++){
            aabbox.update(shapeVec[j]->aabbox.minPt);
            aabbox.update(shapeVec[j]->aabbox.maxPt);
        }
        double midPoint = (aabbox.maxPt[axis] + aabbox.minPt[axis]) / 2.0;
        for(int i = 0; i < shapeVec.size(); i++){
            
            if(shapeVec[i]->aabbox.centroid[axis] <= midPoint){ 
                leftChildVec.push_back(shapeVec[i]);
            }
            else{
                rightChildVec.push_back(shapeVec[i]);
            }
        }
        
        leftChild = new BVHNode(leftChildVec, (axis + 1) % 3);
        rightChild = new BVHNode(rightChildVec, (axis + 1) % 3);
    }
}

bool BVHNode::closestHit(const Ray &r, const double tmin, double &tmax, HitStruct &h){
    if(aabbox.intersect(r)){
        bool lhit = false;
        bool rhit = false;
        HitStruct lrec, rrec;

        if (leftChild){
            lhit = leftChild->closestHit(r, tmin, tmax, lrec);
        }
        if (rightChild){
            rhit = rightChild->closestHit(r, tmin, tmax, rrec);
        }
        if(lhit && rhit){
            if(lrec.t < rrec.t){
                tmax = lrec.t;
                h = lrec;
            }
            else{
                tmax = rrec.t;
                h = rrec;
            }
            return true;
        }
        else if (lhit){
            h = lrec;
            tmax = lrec.t;
            return true;
        }
        else if (rhit){
            h = rrec;
            tmax = rrec.t;
            return true;
        }
        else{
            return false;
        }
    }
    return false;
    
}

bool BVHNode::closestHit(const Ray &r, const double tmin, double &tmax){
    if(aabbox.intersect(r)){
        bool lhit = false;
        bool rhit = false;
        HitStruct lrec, rrec;

        if (leftChild)
            lhit = leftChild->closestHit(r, tmin, tmax);
        if (rightChild)
            rhit = rightChild->closestHit(r, tmin, tmax);
        if(lhit && rhit){
            if(lrec.t < rrec.t){
                tmax = lrec.t;
            }
            else{
                tmax = rrec.t;
            }
            return true;
        }
        else if (lhit){
            tmax = lrec.t;
            return true;
        }
        else if (rhit){
            tmax = rrec.t;
            return true;
        }
        else
            return false;
    }
    return false;
}
