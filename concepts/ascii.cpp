#include <iostream>
using namespace std;

int main(){
  // char to ascii value
  char ch = 'm';
  cout << (int)ch << "\n";

  // char value relative to 'a'
  cout << (int)(ch-'a') << "\n";

  // ascii value to char
  int ascii = 109;
  cout << (char)(ascii - 32) << "\n";

  cout << (char)('m' - 32) << "\n";

  cout << islower(3) << "\n";
  cout << islower('d') << "\n";
  cout << islower('D') << "\n";
  return 0;
}
