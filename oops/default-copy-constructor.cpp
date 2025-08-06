#include <iostream>
using namespace std;

class Distance{
  private:
    int inches;
    float feet;

  public:
    // no-arg constructor
    Distance() : inches(0), feet(0.0) {}

    // multi-arg constructor
    Distance(int in, float ft) : inches(in), feet(ft){}

    void showDist(){
      cout << "Inches : "<< inches << " "; 
      cout << "Feet : " << feet << "\n";
    }

    void set(int in, float ft){
      inches = in;
      feet  = ft;
    }
};

int main(){
  Distance dist1;
  dist1.showDist(); // 0,0

  Distance dist2 = dist1; // defaut constructor
  dist1.set(3,4.2);
  dist2.showDist(); // 0,0
  dist1.showDist(); // 3, 4.2
  return 0;
}
