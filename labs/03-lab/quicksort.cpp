#include <iostream>
#include <utility>

using namespace std;

int partition(int arr[], int low, int high) {
  int &pivot = arr[high];
  int i = low;

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      swap(arr[j], arr[i]);
      i++;
    }
  }
  swap(arr[i], pivot);
  return i;
}

void quicksort(int arr[], int low, int high) {
  if (low >= high)
    return;
  int partitionIndex = partition(arr, low, high);
  quicksort(arr, low, partitionIndex - 1);
  quicksort(arr, partitionIndex + 1, high);
}
int main() {
  int arr[] = {0, 10, 4, 5, 9, 88, 11, -10, -8, -83};
  cout << "Array before sorting: ";
  for (int x : arr) {
    cout << x << ' ';
  }
  int SIZE = 10;
  quicksort(arr, 0, SIZE - 1);
  cout << "Array after sorting: ";
  for (int x : arr) {
    cout << x << ' ';
  }
}