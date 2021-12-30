#pragma once



class Point {
private:
	double x, y;


public:
	
	Point();

	Point(double x, double y);
	
	void affiche() const;
	
	double getx() const;
	
	void setx(double x);



	double gety() const;

	void sety(double y);


	double distance(Point a);

	Point milieu(Point a);

};
