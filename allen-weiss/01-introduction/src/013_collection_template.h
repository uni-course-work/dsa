// Design a class template, Collection, that stores a collection of Objects (in an array),
// along with the current size of the collection. Provide public functions isEmpty,
// makeEmpty, insert, remove, and contains. contains(x) returns true if and only if an
// Object that is equal to x is present in the collection.

#include <iostream>
#include <utility>

using namespace std;

template<typename Object>
class Collection {
  public:
    Collection(): count {0}, array {nullptr}, capacity{0} {}

    ~Collection () {
      delete[] array;
    }

    Collection (const Collection& rhs) : array{nullptr}, count(rhs.count), capacity(rhs.capacity) {
      array = new Object[capacity];
      for (int i = 0; i < count; i++) {
        array[i] = rhs.array[i];
      }
    }
    Collection& operator=(const Collection& rhs) {
      Collection copy = rhs;
      std::swap(array, copy.array);
      std::swap(count, copy.count);
      std::swap(capacity, copy.capacity);
    }

    bool isEmpty () const {
      return count == 0;
    }
    
    void makeEmpty () {
      delete[] array;
      array = nullptr;
      count = 0;
      capacity = 0;
    }

    void insert (Object elem) {
      if (count == capacity) {
        int newCapacity = capacity == 0 ? 1 : capacity * 2;
        Object* temp = new Object[capacity];
        for (int i = 0; i < count; i++) {
          temp[i] = std::move(array[i]);
        }
        delete[] array;
        array = temp;
        capacity = newCapacity;
      }
      array[count] = elem;
      count ++;
    }
    bool contains (Object elem) {
      for (int x: array) {
        if (x == elem) return true;
      }
      return false;
    }
    void remove (Object elem){
      if (count == 0) return;
      for (int i = 0; i < count; i ++) {
        if (array[i] == elem) {
          for (int j = i; j < count - 1; j++) {
            std::swap(array[j], array[j + 1]);
          }
          count --;
          return;
        }
      }
    }
    int size () {
      return count;
    }
  private:
    Object* array;
    int count;
    int capacity;
};