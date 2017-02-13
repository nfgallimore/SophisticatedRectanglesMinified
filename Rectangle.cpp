#include <cmath>
#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4) {
	if (isValidRectangle(p1, p2, p3, p4)) {
		// assigns values
		a1.x = p1.x;
		a1.y = p1.y;

		a2.x = p2.x;
		a2.y = p2.y;

		a3.x = p3.x;
		a3.y = p3.y;

		a4.x = p4.x;
		a4.y = p4.y;
	}
}

void Rectangle::setCoord(Point p1, Point p2, Point p3, Point p4) {			
	if (isValidRectangle(p1, p2, p3, p4)) {
		// assigns values
		a1.x = p1.x;
		a1.y = p1.y;

		a2.x = p2.x;
		a2.y = p2.y;

		a3.x = p3.x;
		a3.y = p3.y;

		a4.x = p4.x;
		a4.y = p4.y;
	}
}

double Rectangle::square() {
	return (length() == width());
}

// length is longest side
double Rectangle::length() {
	// distance between a1 and a2
	double length1 = sqrt((a2.x - a1.x) * (a2.x - a1.x) + (a2.y - a1.y) * (a2.y - a1.y));
	double length2 = sqrt((a3.x - a1.x) * (a3.x - a1.x) + (a3.y - a1.y) * (a3.y - a1.y));
	double length3 = sqrt((a4.x - a1.x) * (a4.x - a1.x) + (a4.y - a1.y) * (a4.y - a1.y));
	//std::cout << length1 << " " << length2 << " " << length3;;
	double hypotenuse;
	if (length1 > length2 && length1 > length3) hypotenuse = length1;
	else if (length2 > length3) hypotenuse = length2;
	else hypotenuse = length3;

	double length;
	if (length1 == hypotenuse) (length2 > length1) ? length = length2 : length = length1;
	if (length2 == hypotenuse) (length1 > length3) ? length = length1 : length = length3;
	if (length3 == hypotenuse) (length2 > length1) ? length = length2 : length = length1;

	_length = length;
	return length;
}
// width is smallest side
double Rectangle::width() {
	double width1 = sqrt((a2.x - a1.x) * (a2.x - a1.x) + (a2.y - a1.y) * (a2.y - a1.y));
	double width2 = sqrt((a3.x - a1.x) * (a3.x - a1.x) + (a3.y - a1.y) * (a3.y - a1.y));
	double width3 = sqrt((a4.x - a1.x) * (a4.x - a1.x) + (a4.y - a1.y) * (a4.y - a1.y));
	//std::cout << width1 << " " << width2 << " " << width3;;
	double width;
	if (width1 < width2 && width1 < width3) width = width1;
	else if (width2 < width3) width = width2;
	else width = width3;

	_width = std::abs(width);
	return std::abs(width);
}
double Rectangle::perimeter() {
	return length() * 2 + width() * 2;
}
double Rectangle::area() {
	return length() * width();
}
bool Rectangle::isValidRectangle(Point p1, Point p2, Point p3, Point p4) {
	
	// checks cases to make sure that the four corners do not have more than two coordinates of same value
	int countX = 0;
	// p1 case
	if (p1.x == p2.x) countX++;
	if (p1.x == p3.x) countX++;
	if (p1.x == p4.x) countX++;

	// p2 case
	if (p2.x == p3.x) countX++;
	if (p2.x == p4.x) countX++;

	// p3 case
	if (p3.x == p4.x) countX++;

	int countY = 0;
	// p1 case
	if (p1.y == p2.y) countY++;
	if (p1.y == p3.y) countY++;
	if (p1.y == p4.y) countY++;

	// p2 case
	if (p2.y == p3.y) countY++;
	if (p2.y == p4.y) countY++;

	// p3 case
	if (p3.y == p4.y) countY++;

	// final statement to determine if there are more than two coordinates of same value
	if (countX <= 2 && countY <= 2) {
		// checks range
		if (p1.x > 0 && p1.y > 0 && p2.x > 0 && p2.y > 0 && p3.x > 0 && p3.y > 0 && p4.x > 0 && p4.y > 0 && 
			p1.x <= 20 && p1.y <= 20 && p2.x <= 20 && p2.y <= 20 && p3.x <= 20 && p3.y <= 20 && p4.x <= 20 && p4.y <= 20) {
			/* Algorithm by Curd from http://stackoverflow.com/questions/2303278/find-if-4-points-on-a-plane-form-a-rectangle */
		  	double cx,cy;
		  	double dd1,dd2,dd3,dd4;

		  	cx = (p1.x + p2.x + p3.x + p4.x) / 4;
		  	cy = (p1.y + p2.y + p3.y + p4.y) / 4;

		  	dd1 = (cx - p1.x) * (cx - p1.x) + (cy - p1.y) * (cy - p1.y);
		  	dd2 = (cx - p2.x) * (cx - p2.x) + (cy - p2.y) * (cy - p2.y);
		  	dd3 = (cx - p3.x) * (cx - p3.x) + (cy - p3.y) * (cy - p3.y);
		  	dd4 = (cx - p4.x) * (cx - p4.x) + (cy - p4.y) * (cy - p4.y);

			return dd1 == dd2 && dd1 == dd3 && dd1 == dd4;
		}
		{
			// should really throw an exception here but ... another day another time @TODO
			std::cout << "\nError: Rectangle is not within first quadrant. Cannot assign inputted values.";
			return false;
		}
	}
	{
		// exception here as well @TODO
		std::cout << "\nError: More than two coordinates share same x or y coordinate.";
		return false;
	}
}
