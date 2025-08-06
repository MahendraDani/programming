#include <iostream>
using namespace std;

class MyArray {
public:
    int* arr;

    // Constructor
    MyArray() {
        arr = new int[5];
        for (int i = 0; i < 5; ++i)
            arr[i] = 0;
    }

    // Copy Constructor (deep copy)
    MyArray(const MyArray& other) {
        arr = new int[5];
        for (int i = 0; i < 5; ++i)
            arr[i] = other.arr[i];
    }

    // Copy Assignment Operator (deep copy)
    MyArray& operator=(const MyArray& other) {
        if (this == &other)
            return *this;

        delete[] arr;
        arr = new int[5];
        for (int i = 0; i < 5; ++i)
            arr[i] = other.arr[i];
        return *this;
    }

    // Destructor
    ~MyArray() {
        delete[] arr;
    }
};

int main(){
  return 0;
}
