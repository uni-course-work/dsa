#include <iostream>
#include <algorithm>

void bubbleSort (int arr[], int SIZE) {
  if (SIZE < 2) {
    std::cout << "Invalid arr of size smaller than 2\n";
    return;
  }
  for (int i = 0; i < SIZE; i ++) {
    for (int j = 0; j < SIZE - i; j++) {
      if (arr[j] > arr[j + 1]) {
        // int temp = arr[j];
        // arr[j] = arr[j + 1];
        // arr[j + 1] = temp;
        std::swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int main () {
  int SIZE = 10;
  int arr[] = {10, 99, 17, 11 , 13, 100, 101, 88, -100, -999};
  std::cout << "Array before sorting: ";
  for (int x: arr) {
    std::cout << x  << ' ';
  }
  std::cout << '\n';
  bubbleSort(arr, SIZE);
  std::cout << "Array after sorting: ";
  for (int x: arr) {
    std::cout << x  << ' ';
  }
  std::cout << '\n';
}