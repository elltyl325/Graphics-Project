
#include "Vector3D.h"
#include <iostream>

using namespace std;

const Vector3D operator+(const Vector3D &lhs, const Vector3D &rhs){
  return Vector3D(lhs) += rhs;
}

const Vector3D operator-(const Vector3D &lhs, Vector3D &rhs) {
  return Vector3D(lhs) -= rhs;
}

const Vector3D operator*(const Vector3D &lhs, double rhs) {
  return Vector3D(lhs) *= rhs;
}

const Vector3D operator*(double rhs, Vector3D &lhs) {
  return Vector3D(lhs) *= rhs;
}

const Vector3D operator*(const int rhs, Vector3D &lhs) {
  return Vector3D(lhs) *= rhs;
}

const Vector3D operator/(const Vector3D &lhs, const double rhs){
  return Vector3D(lhs) /= rhs;
}

// For multiplying color values
const Vector3D operator*(const Vector3D &lhs, const Vector3D &rhs) {
  Vector3D tVec(lhs);
  tVec[0] *= rhs[0];
  tVec[1] *= rhs[1];
  tVec[2] *= rhs[2];
  return tVec;
}

Vector3D Vector3D::normalize(void) {
  const double vector_length =
      sqrt(data[0] * data[0] + data[1] * data[1] + data[2] * data[2]);
  if (vector_length > 0.0) {
    data[0] /= vector_length;
    data[1] /= vector_length;
    data[2] /= vector_length;
  }

  return Vector3D(data[0], data[1], data[2]);
}




// int main(int argc, char *argv[]){

//   std::string pos = "-1 0 0";
//   Vector3D a(1, .5, .3);
//   Vector3D b(.9, .3, 1);
//   Vector3D c = a - b;
//   c.printVector();


// }