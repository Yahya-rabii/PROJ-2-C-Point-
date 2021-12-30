#include "Header.h"
#include<iostream>
#include<math.h>

using namespace std;

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}



Point::Point()

{
	x = 0;
	y = 0;

}

void Point::affiche() const
{
	cout << "<" << x << "," << y << ">" << endl;
}



double Point::getx() const
{
	return x;
}



void Point::setx(double x)
{
	this->x = x;
}



double Point::gety() const
{
	return y;
}



void Point::sety(double y)
{
	this->y = y;
}



double Point::distance(Point a)
{

	return sqrt( pow (this->x - a.x,2) + pow (this->y - a.y ,2));


}



Point Point::milieu(Point a)
{

	return Point ( ( this->x + a.x)/2 , (this->y + a.y)/2 );

}


