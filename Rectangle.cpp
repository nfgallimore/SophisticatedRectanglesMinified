// uses algorithm by Curd from http://stackoverflow.com/questions/2303278/find-if-4-points-on-a-plane-form-a-rectangle */
#include <cmath> 
#include <iostream> 
#include "Rectangle.hpp"
Rectangle::Rectangle(Point p,Point q,Point r,Point t)
{
	if(b(p,q,r,t))
		u.x=p.x,u.y=p.y,i.x=q.x,i.y=q.y,j.x=r.x,j.y=r.y,v.x=t.x,v.y=t.y;
}
void Rectangle::setCoord(Point p,Point q,Point r,Point t)
{
	if(b(p,q,r,t))u.x=p.x,u.y=p.y,i.x=q.x,i.y=q.y,j.x=r.x,j.y=r.y,v.x=t.x,v.y=t.y;
}
double Rectangle::square()
{
	return(length()==width());
}
double Rectangle::length()
{
	double l=sqrt((i.x-u.x)*(i.x-u.x)+(i.y-u.y)*(i.y-u.y)),m=sqrt((j.x-u.x)*(j.x-u.x)+(j.y-u.y)*(j.y-u.y)),n=sqrt((v.x-u.x)*(v.x-u.x)+(v.y-u.y)*(v.y-u.y)),h,s;
	(l>m&&l>n)?h=l:(m>n)?h=m:h=n;
	if(l==h)
		(m>l)?s=m:s=l;
	if(m==h)
		(l>n)?s=l:s=n;
	if(n==h)
		(m>l)?s=m:s=l;
	return s;
}
double Rectangle::width()
{
	double w=sqrt((i.x-u.x)*(i.x-u.x)+(i.y-u.y)*(i.y-u.y)),x=sqrt((j.x-u.x)*(j.x-u.x)+(j.y-u.y)*(j.y-u.y)),y=sqrt((v.x-u.x)*(v.x-u.x)+(v.y-u.y)*(v.y-u.y)),z;
	(w<x&&w<y)?z=w:(x<y)?z=x:z=y;
	return z;
}
double Rectangle::perimeter()
{
	return length()*2+width()*2;
}
double Rectangle::area()
{
	return length()*width();
}
bool Rectangle::b(Point p,Point q,Point r,Point t)
{
	return q.x!=(r.x!=(t.x!=p.x)?p.x:p.x?p.x:p.x)&&q.x!=(r.x!=p.x)?p.x:p.x&&q.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(t.x!=p.x)?p.x:p.x&&r.x!=(q.x!=p.x)?p.x:p.x&&q.y!=(r.y!=(t.y!=p.y)?p.y:p.y?p.y:p.y)&&q.y!=(r.y!=p.y)?p.y:p.y&&q.y!=(t.y!=p.y)?p.y:p.y&&r.y!=(t.y!=p.y)?p.y:p.y&&(r.y!=(q.y!=p.y)?p.y:p.y)?(p.x>0&&p.y>0&&q.x>0&&q.y>0&&r.x>0&&r.y>0&&t.x>0&&t.y>0&&p.x<=20&&p.y<=20&&q.x<=20&&q.y<=20&&r.x<=20&&r.y<=20&&t.x<=20&&t.y<=20)?((p.x+q.x+r.x+t.x)/4-p.x)*((p.x+q.x+r.x+t.x)/4-p.x)+((p.y+q.y+r.y+t.y)/4-p.y)*((p.y+q.y+r.y+t.y)/4-p.y)==((p.x+q.x+r.x+t.x)/4-q.x)*((p.x+q.x+r.x+t.x)/4-q.x)+((p.y+q.y+r.y+t.y)/4-q.y)*((p.y+q.y+r.y+t.y)/4-q.y)&&((p.x+q.x+r.x+t.x)/4-p.x)*((p.x+q.x+r.x+t.x)/4-p.x)+((p.y+q.y+r.y+t.y)/4-p.y)*((p.y+q.y+r.y+t.y)/4-p.y)==((p.x+q.x+r.x+t.x)/4-r.x)*((p.x+q.x+r.x+t.x)/4-r.x)+((p.y+q.y+r.y+t.y)/4-r.y)*((p.y+q.y+r.y+t.y)/4-r.y)&&((p.x+q.x+r.x+t.x)/4-p.x)*((p.x+q.x+r.x+t.x)/4-p.x)+((p.y+q.y+r.y+t.y)/4-p.y)*((p.y+q.y+r.y+t.y)/4-p.y)==((p.x+q.x+r.x+t.x)/4-t.x)*((p.x+q.x+r.x+t.x)/4-t.x)+((p.y+q.y+r.y+t.y)/4-t.y)*((p.y+q.y+r.y+t.y)/4-t.y):1:1;
}