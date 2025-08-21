#include <iostream>
using namespace std;

/*
Our example models a database of employees of a widget company. We’ve simplified the situation
so that only three kinds of employees are represented. Managers manage, scientists perform
research to develop better widgets, and laborers operate the dangerous widget-stamping presses.
- The database stores a name and an employee identification number for all employees, no matter
what their category.
- for managers, it also stores their titles and golf club dues.
- For scientists, it stores the number of scholarly articles they have published.
- Laborers need no additional data beyond their names and numbers.
*/

class Employee
{
private:
  string name;
  string number;

public:
  void getData()
  {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter number: ";
    cin >> number;
  }

  void showData()
  {
    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
  }
};

class Manager : public Employee
{
private:
  string title;
  double dues;

public:
  void getData()
  {
    Employee::getData();
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter golf club dues: ";
    cin >> dues;
  }
  void showData()
  {
    Employee::showData(); // calling method from base class
    cout << "Title: " << title << endl;
    cout << "Golf Club Dues: " << dues << endl;
  }
};

class Scientist : public Employee {
  private:
    int pubs;
  public:

    // Method over-riding
    void getData(){
      Employee::getData(); // Code reusability
      cout << "Publications: " << endl;
      cin >> pubs;
    }

    void showData(){
      Employee::showData();
      cout << "Publications: " << pubs << endl;
    }
};

int main()
{
  Manager m;
  m.getData();

  Scientist s;
  s.getData();

  m.showData();
  s.showData();
  return 0;
}