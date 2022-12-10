#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  string employee1 = "Amit";
  int employee1Age = 22;

  string employee2 = "John";
  int employee2Age = 25;

  string employee3 = "Bob";
  int employee3Age = 43;

  string employee4 = "Max";
  int employee4Age = 32;

  cout << left; // Justify the output to the left

  cout << "This table is using iomanip lib: " << endl;
  cout << setw(10) << "Name";
  cout << setw(10) << "Age" << endl;
  cout << endl;

  // The iomanip lib table
  cout << setw(10) << employee1;
  cout << setw(10) << employee1Age << endl;

  cout << setw(10) << employee2;
  cout << setw(10) << employee2Age << endl;

  cout << setw(10) << employee3;
  cout << setw(10) << employee3Age << endl;

  cout << setw(10) << employee4;
  cout << setw(10) << employee4Age << endl;

  return 0;
}