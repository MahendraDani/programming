/*
What and Why inheritance?
- Reusability
- Extensibility
*/ 
#include <iostream>
using namespace std;

class Counter {
  protected : 
    int count;

  public:
    Counter() : count(0){};

    Counter(int cnt): count(cnt){};

    int getCount(){
      return count;
    }
    
    void displayCount(){
      cout << "Counter: " << count << endl;
    }

    // prefix increment
    Counter operator++(){
      return Counter(++count);
    }
};

class CountDn : public Counter {
  public:
    // note the return type here
    CountDn() : Counter(){};
    CountDn(int cnt) : Counter(cnt){};

    Counter operator--(){
      return Counter(--count);
    }

    // override member function from Counter (base class)
    void displayCount(){
      cout << "CountDn: " << count << endl;
    }
};

int main(){
  CountDn counter(10);

  cout << counter.getCount() << endl;

  ++counter; ++counter; // Reusability: uses the implementation of operator overloading from Counter(base class)

  cout << counter.getCount() << endl; 
  counter.displayCount(); // CountDn: 12 => uses overriden function from CountDn

  --counter; --counter; // Extensibility : use the implementation of operator overloading from CountDn(derived class)

  cout << counter.getCount() << endl;
  counter.displayCount(); // CountDn : 10 => uses overriden function from CountDn
  return 0;
}