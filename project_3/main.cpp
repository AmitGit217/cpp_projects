#include <iostream>
#include <string>

int main() {

  //   std::cout << "Hello World" << std::endl;
  //   std::cerr << "This is an error message" << std::endl;
  //   std::clog << "This is a log message" << std::endl;

  //   int age;
  //   std::string name;

  //   std::cout << "Enter your name and age: " << std::endl;
  //   std::cin >> name;
  //   std::cin >> age;
  //   std::cout << "Hello " << name << " You are " << age << " years old!"
  //             << std::endl;

  std::string fullName;
  std::cout << "Enter your full name now please" << std::endl;
  std::getline(std::cin, fullName);
  std::cout << "Your full name is " << fullName << std::endl;

  return 0;
}