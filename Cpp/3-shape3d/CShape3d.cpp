#include <iostream>
using namespace std;

class CShape3d {
public:
  virtual float volume(){
  }
};

class CBox : public CShape3d {
  float ladoa, ladob, ladoc;
public:
  CBox(float a, float b, float c){
    ladoa = a;
    ladob = b;
    ladoc = c;
  }
  float volume() {
    return ladoa*ladob*ladoc;
  }
};

class CCone : public CShape3d {
  float raio, altura;
public:
  CCone(float r, float h){
    raio = r;
    altura = h;
  }
  float volume() {
    return (2*3.14*raio*altura/3);
  }
};

class CCylinder : public CShape3d {
  float raio, altura;
public:
  CCylinder(float r, float h){
    raio = r;
    altura = h;
  }
  float volume() {
    return (raio*2*3.14*altura);
  }
};
