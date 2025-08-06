#include <iostream>
using namespace std;
/*
Class obj1(...); // data member init

Class obj2(obj1); // invokes copy constructor;
Class obj3 = obj2; // invokes copy constuctor;
but what happens when = operator is also overloaded?
*/

class Distance{
  private:
    int inches;
    float feet;

  public:
    // no-arg constructor
    Distance() : inches(0), feet(0.0) {}

    // multi-arg constructor
    Distance(int in, float ft) : inches(in), feet(ft){}

    Distance(const Distance& other){
      cout << "copy constructor invoked\n";
      inches = other.inches;
      feet = other.feet;
    }

    void showDist(){
      cout << "Inches : "<< inches << " "; 
      cout << "Feet : " << feet << "\n";
    }

    void set(int in, float ft){
      inches = in;
      feet  = ft;
    }

    void operator=(const Distance& other){
      cout << "overloaded = operator invoked\n";
      inches = 1 + other.inches;
      feet = 1 + other.feet;
    }
};

int main(){
  Distance dist1(3,4.2); // calls parameterized constructor

  Distance dist2(dist1); // calls copy constructor
  dist2.showDist(); // 3,4.2
  dist2.set(2,1.5);

  Distance dist3 = dist1; // calls copy constructor, why?
  dist3.showDist(); // 3,4.2
  
  // Because dist3 object is begin init for the first time, only
  // after the object is init, the assignment operator is called.
  
  dist3 = dist2; // assignment operator is called
                 // NOT Copy constructor
  dist3.showDist(); // 1 + 2, 1 + 1.5 => 3, 2.5
  return 0;
}
