#include "015_rectangle.h"
#include <iostream>
#include <vector>

namespace
{
  class Rectangle {
  public:
    Rectangle(const int width, const int height) : width{width}, height{height} {}

    int getWidth [[nodiscard]] () const { return width; }
    int getHeight [[nodiscard]] () const { return height; }
    void print() const {
      std::cout << "Height: " << getHeight() << ' ';
      std::cout << "Width: " << getWidth() << ' ';
      std::cout << '\n';
    }

  private:
    int width;
    int height;
  };
}

int main() {
  const Rectangle r1{5, 12};
  const Rectangle r2(8, 8);

  std::vector<Rectangle> rectangles{r1, r2};
  const Rectangle bigByArea = findMax(rectangles, [](Rectangle a, Rectangle b) {
    return (a.getHeight() * a.getWidth()) < (b.getHeight() * b.getWidth());
  });
  const Rectangle bigByPerimeter =
      findMax(rectangles, [](Rectangle a, Rectangle b) {
        return (2 * a.getHeight() + 2 * a.getWidth()) <
               (2 * b.getHeight() + 2 * b.getWidth());
      });
  std::cout << "Big by area: ";
  bigByArea.print();
  std::cout << "Big by perimeter: ";
  bigByPerimeter.print();
}