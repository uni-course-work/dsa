#include <iostream>

int main () {
  int SIZE = 10;
  int arr [SIZE];
  std::cout << "Insert Ten integers: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> arr[i];
  }
  int min = arr[0];
  for (int i = 1; i < SIZE; i ++) {
    if (arr[i] < min) min = arr[i];
  }
  std::cout << "MIN: " << min << '\n';
}