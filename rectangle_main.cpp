// A Sophisticated Rectangle Class
#include <iostream>
#include <stdexcept>
#include "Rectangle.hpp" // include definition of class Rectangle
/*

Create a sophisticated Rectangle class. This class stores only the Cartesian coordinates of the four corners of the
rectangle. The constructor calls a set function that accepts four sets of coordinates and verifies that
each of these is in the first quadrant with no single x- or y-coordinate larger than 20.0. The set function
also verifies that the supplied coordinates do, in fact, specify a rectangle.

Provide member functions that calculate the length, width, perimeter and area. The length is the larger of the two
dimensions.

Include a predicate function square that determines whether the rectangle is a square.
*/

int main() {
   Point w{1.0, 1.0};
   Point x{5.0, 1.0};
   Point y{5.0, 3.0};
   Point z{1.0, 3.0};
   Point j{0.0, 0.0};
   Point k{1.0, 0.0};
   Point m{1.0, 1.0};
   Point n{0.0, 1.0};
   Point test1{1.0, 4.0}, test2{1.0,4.0}, test3{2,3}, test4{2,3.5};

   Rectangle r{test1, test2, test3, test4};
   r.printRect();
   Rectangle r1{z, y, x, w};
   std::cout << "Rectangle 1:\n";
   std::cout << "length = " << r1.length();
   std::cout << "\nwidth = " << r1.width();
   r1.perimeter();
   r1.area();
   std::cout << "\nThe rectangle "
      << (r1.square() ? "is" : "is not")
      << " a square.\n";

   Rectangle r2{j, k, m, n};
   std::cout << "\nRectangle 2:\n";
   std::cout << "length = " << r2.length();
   std::cout << "\nwidth = " << r2.width();
   r2.perimeter();
   r2.area();
   std::cout << "\nThe rectangle "
      << (r2.square() ? "is" : "is not")
      << " a square.\n";

}
