#pragma once

#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;

class Vector3D{
    public:
    Vector3D() { data[0] = data[1] = data[2] = 0; }

    Vector3D(const double x, const double y, const double z) {
    data[0] = x;
    data[1] = y;
    data[2] = z;
  }
    Vector3D( const Vector3D &v ){ // copy constructor
      data[0] = v[0];
      data[1] = v[1];
      data[2] = v[2];
    }  

    Vector3D normalize(void);

    Vector3D &operator+=(const Vector3D &rhs) {
    data[0] += rhs.data[0];
    data[1] += rhs.data[1];
    data[2] += rhs.data[2];
    return *this;
  }

  Vector3D &operator-=(const Vector3D &rhs) {
    data[0] -= rhs.data[0];
    data[1] -= rhs.data[1];
    data[2] -= rhs.data[2];
    return *this;
  }

  Vector3D &operator*=(const double c) {
    data[0] *= c;
    data[1] *= c;
    data[2] *= c;
    return *this;
  }

  Vector3D &operator/=(const double c) {
    data[0] /= c;
    data[1] /= c;
    data[2] /= c;
    return *this;
  }

  Vector3D &operator/=(const Vector3D &rhs) {
    data[0] /= rhs.data[0];
    data[1] /= rhs.data[1];
    data[2] /= rhs.data[2];
    return *this;
  }

  Vector3D &operator/=(Vector3D &rhs) {
    data[0] /= rhs.data[0];
    data[1] /= rhs.data[1];
    data[2] /= rhs.data[2];
    return *this;
  }


  Vector3D &operator=(const std::string &rhs) {
    std::stringstream ss;
    ss.str(rhs);
    ss >> data[0] >> data[1] >> data[2];
    return *this;
  }

  Vector3D &operator=(const Vector3D &rhs) {
    data[0] = rhs.data[0];
    data[1] = rhs.data[1];
    data[2] = rhs.data[2];
    return *this;
  }

  double length(void) const {
    return sqrt(data[0] * data[0] + data[1] * data[1] + data[2] * data[2]);
  }

  double dot(const Vector3D &v) const {
    return data[0] * v[0] + data[1] * v[1] + data[2] * v[2];
  }

  Vector3D cross(const Vector3D &v) const {
    return Vector3D(data[1] * v[2] - data[2] * v[1],
                    data[2] * v[0] - data[0] * v[2],
                    data[0] * v[1] - data[1] * v[0]);
  }

  const double operator[]( const int idx ) const {   // allow float y = a[1]
  return data[idx];
  }

  double &operator[]( const int idx ){// allow a[1] = y
    return data[idx];
  }   

  void printVector(){
    cout << "v[0]: " << data[0] << " v[1]: " << data[1] << " v[2]: " << data[2] << endl;
} 

  private:
    double data[3];
};



const Vector3D operator+(const Vector3D &lhs, const Vector3D &rhs);
const Vector3D operator-(const Vector3D &lhs, const Vector3D &rhs);
const Vector3D operator*(const Vector3D &lhs, double rhs);
const Vector3D operator*(double rhs, const Vector3D &lhs);
const Vector3D operator*(const int rhs, const Vector3D &lhs);
const Vector3D operator*(const int rhs, const Vector3D &lhs);
const Vector3D operator/(const Vector3D &lhs, const double rhs);

const Vector3D operator*(const Vector3D &lhs, const Vector3D &rhs);