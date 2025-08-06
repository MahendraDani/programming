#include <iostream>
using namespace std;
/*
Create a class Counter that:
- Tracks an integer value count

Supports:
- Setting the value (set(int))
- Overloading operator= to copy count
- Overloading operator+= to add another Counter's count

Allows chaining like:
```cpp
Counter a, b, c;
a.set(10);
b.set(5);
c.set(2);

Counter result;
result = a += b += c;
```

output:
c.count == 2
b.count == 7
a.count == 17
result.count == 17


*/

class Counter {
  private:
    int count=0;

  public:
    void set(int cnt){
      count = cnt;
    }

    void get(){
      cout << count << "\n";
    }

    Counter& operator=(const Counter& other){
      this->count = other.count;
      return *this;
    }

    Counter& operator+=(const Counter& other){
      this->count = this->count + other.count;
      return *this;
    }
};

int main(){
  Counter a,b,c;
  a.set(10);
  b.set(5);
  c.set(2);

  Counter result;
  result = a+=b +=c;
  result.get();
  return 0;
}
