#include <iostream>

int main () {
  int SIZE = 10;
  int arr [SIZE];
  std::cout << "Insert Ten integers: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> arr[i];
  }
  std::cout << "You provided: ";
  for (int i = 0; i < SIZE; i ++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}