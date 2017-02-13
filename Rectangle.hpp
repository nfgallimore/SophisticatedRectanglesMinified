#ifndef Rectangle_hpp
#define Rectangle_hpp

struct Point {
	double x,y;
};

class Rectangle 
{
private:
	Point a1, a2, a3, a4;
	bool isValidRectangle(Point p1, Point p2, Point p3, Point p4);

public:
	double length();
	double width();
	Rectangle(Point p1, Point p2, Point p3, Point p4);
	double perimeter();
	double area();
	void setCoord(Point p1, Point p2, Point p3, Point p4);
	double square();
};
#endif