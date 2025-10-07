#include <iostream>

using namespace std;

class Base {
  public:
    Base(){
      show();
    }

    virtual void show(){
      cout << "Base: show\n";
    }
};

class Derived : public Base {
  public:
    void show(){
      cout << "Derived: show\n";
    }
};

int main(){
  Derived d;
  return 0;
}
