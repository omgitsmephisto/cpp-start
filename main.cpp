#include <iostream>

int main(int argc, char** argv) {
  std::cout << "Hello, world!" << "\n";
  
  int myInt;
  myInt = 10;

  std::cout << myInt << "\n";

  char charStr[11] = "0123456789";
  std::cout << charStr << "\n";

  std::string myString = "aaaaaaaaaaaaaaaaaaaaa";
  std::cout << myString << "\n";

  // for(int i; i<=1; i++) {
  //   int x;
  //   std::cin >> x;

  //   if (x > 0) {
  //     std::cout << "É maior que 0!" << "\n";
  //   } else {
  //     std::cout << "É menor que 0!" << "\n";
  //   }
  // }

  int arr[10];

  std::cout << sizeof(arr) / sizeof(int) << "\n";

  // for (int i; i < sizeof(arr) / sizeof(int); i++) {
  //   arr[i] = i;
  // }

  // for (int i; i < sizeof(arr) / sizeof(int); i++) {
  //   std::cout << arr[i] << "\n";
  // }

  return 0;
}