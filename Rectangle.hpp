#ifndef Rectangle_hpp
#define Rectangle_hpp
struct Point{double x,y;};class Rectangle{private:Point u,i,j,v;bool b(Point p1,Point p2,Point p3,Point p4);public:double length(),width(),perimeter(),square(),area();Rectangle(Point p1,Point p2,Point p3,Point p4);void setCoord(Point p1,Point p2,Point p3,Point p4);void printRect();};
#endif