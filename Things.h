#ifndef THINGS_H
#define THINGS_H

#include <iostream>
#include <math.h>

using namespace std;

class Complex {
public:
	double re = 0;
	double im = 0;

	void set_complex(double r, double i);
	double get_re_complex();
	double get_im_complex();
	void output_complex();
	double abs();

	Complex sum(Complex a, Complex b);
	Complex diff(Complex a, Complex b);

	Complex() {
		re = 1;
		im = 1;
	}

	Complex(double r, double i) {
		re = r;
		im = i;
	}

	Complex(const Complex& sec)
	{
		this->re = sec.re;
		this->im = sec.im;
	}

	~Complex()
	{
		
	}
};

class Vector {
public:
	
	double x;
	double y;

	void setVector(double x, double y);
	double getX();
	double getY();

	double length();
	void outputXY();

	double scalarMult(Vector a, Vector b);

	Vector() {
		x = 1;
		y = 1;
	}

	Vector(double a, double b) {
		x = a;
		y = b;
	}

	Vector(const Vector& sec)
	{
		this->x = sec.x;
		this->y = sec.y;
	}

	~Vector()
	{

	}

};

class Circle {
public:
	double radius;
	string color;

	void setCircle(double radius, string color);
	double getRadius();
	string getColor();

	double ring_length();
	double area();

	Circle()
	{
		radius = 1;
		color = "Black";
	}

	Circle(double r, string c)
	{
		radius = r;
		color = c;
	}

	Circle(const Circle& sec)
	{
		this->radius = sec.radius;
		this->color = sec.color;
	}

	~Circle()
	{

	}
};

#endif