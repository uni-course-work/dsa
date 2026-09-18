#include <iostream>
#include <vector>
#include "015_rectangle.h"

class Rectangle {
  public:
    Rectangle(int width, int height) : width{width}, height{height} {}

    int getWidth() const {
      return width;
    }
    int getHeight() const {
      return height;
    }
    void print () const {
      std::cout << "Height: " << getHeight() << ' ';
      std::cout << "Width: " << getWidth() << ' ';
      std::cout << '\n';
    }
  private:
    int width;
    int height;
};

int main () {
  Rectangle r1{5, 12};
  Rectangle r2(8, 8);

  std::vector<Rectangle> rectangles {r1, r2};
  const Rectangle bigByArea = findMax(rectangles, [](Rectangle a, Rectangle b){ return (a.getHeight() * a.getWidth()) < (b.getHeight() * b.getWidth());});
  const Rectangle bigByPerimeter = findMax(rectangles, [](Rectangle a, Rectangle b) { return (2 * a.getHeight() + 2* a.getWidth()) < (2 * b.getHeight() + 2* b.getWidth());});
  std::cout << "Big by area: ";
  bigByArea.print(); 
  std::cout << "Big by perimeter: ";
  bigByPerimeter.print();
}