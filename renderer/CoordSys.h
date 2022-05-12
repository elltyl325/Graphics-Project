#pragma once

#include <iostream>
#include "Vector3D.h"

using namespace std;

// Coordinate Sys - represent arbitrary 3D bases
// -- could be called OrthornormalBasis
// -- orther -- means at 90 degrees to each toher
// -- normal -- unit length

class CoordSys{
    public:

    CoordSys(){
        m_U = sivelab::Vector3D(1,0,0);
        m_V = sivelab::Vector3D(0,1,0);
        m_W = sivelab::Vector3D(0,0,1);
    }

    CoordSys(sivelab::Vector3D u, sivelab::Vector3D v, sivelab::Vector3D w){
        m_U = u;
        m_V = v;
        m_W = w;
    }

    virtual ~CoordSys(){}

    CoordSys( const sivelab::Vector3D &gazeDirection, sivelab::Vector3D tmpUp){
        m_W = (sivelab::Vector3D(-1,-1,-1)*gazeDirection)/gazeDirection.length();
        m_U = tmpUp.cross(m_W) / tmpUp.cross(m_W).length();
        m_V = (m_W.cross(m_U)) / ((m_W.cross(m_U)).length());
    }

    void printCoords(void){
        cout << "m_U[0]: " << m_U[0] << " m_U[1]: " << m_U[1] << " m_U[2]: " << m_U[2] << endl;
        cout << "m_V[0]: " << m_V[0] << " m_V[1]: " << m_V[1] << " m_W[2]: " << m_V[2] << endl;
        cout << "m_W[0]: " << m_W[0] << " m_W[1]: " << m_W[1] << " m_W[2]: " << m_W[2] << endl;
    }

    
    // Need to represent each vector of the basis..
    sivelab::Vector3D m_U, m_V, m_W;

};