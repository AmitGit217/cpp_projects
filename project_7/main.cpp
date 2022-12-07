#include <iomanip>
#include <iostream>

int main() {
  float numF{1.5543543534534f};
  double numD{1.42343242342342342};
  long double numLD{1.54354353453535345345354353L};

  std::cout << std::setprecision(20);
  std::cout << "This is the float: " << numF << std::endl;
  std::cout << "This is the double: " << numD << std::endl;
  std::cout << "This is the long double: " << numLD << std::endl;

  return 0;
}