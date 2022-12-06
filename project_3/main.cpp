#include <iostream>
#include <string>

int main() {

  //   std::cout << "Hello World" << std::endl;
  //   std::cerr << "This is an error message" << std::endl;
  //   std::clog << "This is a log message" << std::endl;

  int age;
  std::string name;

  std::cout << "Enter your name and age: " << std::endl;
  std::cin >> name;
  std::cin >> age;

  std::cout << "Hello " << name << " You are " << age << " years old!"
            << std::endl;

  return 0;
}