#include <iostream>
#include <limits>

using namespace std;

int main() {

  cout << "Normal int min => " << numeric_limits<int>::min() << endl;
  cout << "Normal int max => " << numeric_limits<int>::max() << endl;
  cout << endl;
  cout << "Short int min => " << numeric_limits<short int>::min() << endl;
  cout << "Short int max => " << numeric_limits<short int>::max() << endl;
  cout << endl;
  cout << "Long int min => " << numeric_limits<long int>::min() << endl;
  cout << "Long int max => " << numeric_limits<long int>::max() << endl;

  return 0;
}