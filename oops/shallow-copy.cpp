#include <iostream>
using namespace std;
/*
Write a class MyArray that:
- Stores an int* array of size 5
- Allocates memory in constructor
- Does a deep copy in its copy constructor
*/

class MyArray {
  int* arr;

  MyArray(){
    arr = new int[5];
    // init
    for(int i=0;i<n;i++){
      arr[i] = 0;
    }
  }
  
  // Copy constructor : deep copy
  MyArray(const MyArray& other){
    arr = new int[5];
    for(int i=0;i<5;i++){
      arr[i] = other.arr[i];
    }
  }

  ~MyArray(){
    delete [];
  }
};

int main(){
  return 0;
}
