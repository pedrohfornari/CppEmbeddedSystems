#include <iostream>
using namespace std;

template <class input>
class CShape3d {
public:
  virtual input volume(){
  }
};

template <class input>
class CBox : public CShape3d<input> {
  input ladoa, ladob, ladoc;
public:
  CBox(input a, input b, input c){
    ladoa = a;
    ladob = b;
    ladoc = c;
  }
  input volume() {
    return ladoa*ladob*ladoc;
  }
};

template <class input>
class CCone : public CShape3d<input> {
  input raio, altura;
public:
  CCone(input r, input h){
    raio = r;
    altura = h;
  }
  input volume() {
    return (2*3.14*raio*altura/3);
  }
};

template <class input>
class CCylinder : public CShape3d<input> {
  input raio, altura;
public:
  CCylinder(input r, input h){
    raio = r;
    altura = h;
  }
  input volume() {
    return (raio*2*3.14*altura);
  }
};
