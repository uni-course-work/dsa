#include <iostream>


int binarySearch (int arr[], int left, int right, int target) {
  while ( right >= left) {
    int mid = (left + right )/2;
    int midElem = arr[mid];
    if (midElem == target ) {
      return mid;
    } else if (midElem < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return - 1;
}

int main () {
  int SIZE = 12;
  int arr [] = { 2, 4, 6, 7, 9, 12, 13, 15, 16, 18, 19, 21 };
  std::cout << "Array Before Deletion: ";
  for (int x: arr) {
    std::cout << x << " ";
  }
  std::cout << '\n';

  int targetElem;
  std::cout << "Target Element: ";
  std::cin >> targetElem;
  int index = binarySearch(arr, 0, SIZE - 1, targetElem);
  if (index == -1) {
    std::cout << "Element Not Found: " << targetElem << '\n';
    return 0;
  }
  std::cout<< "Element found at index: " << index << '\n';
  return 0;
}