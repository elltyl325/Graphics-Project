#pragma once

#include "Vector3D.h"
#include "HitStruct.h"
#include <time.h>
#include <iostream>

using namespace std;

class SceneContainer;
class Shader{
    public:

    sivelab::Vector3D m_ambient;
    string name;
    string type;

    Shader(){
        m_ambient = sivelab::Vector3D(-1,0,0);
    }

    Shader(const sivelab::Vector3D ambient){
        m_ambient = ambient;
    }

    void setAmbient(const sivelab::Vector3D ambient){
        m_ambient = ambient;
    }

    virtual ~Shader(){}

    void printShader(){
        m_ambient.printVector();
    }

    void setName(string n){ 
        name = n;
    }

    virtual sivelab::Vector3D apply(SceneContainer * s, HitStruct &h, int depth){
        cout << "test base shader start" << endl;
        if(m_ambient[0] == -1){
            m_ambient = sivelab::Vector3D(rand()/RAND_MAX, rand()/RAND_MAX, rand()/RAND_MAX);
            h.shader->setAmbient(m_ambient);
            return m_ambient;
        }else{
            h.shader->setAmbient(m_ambient);
            return m_ambient;
        }
    }
};

