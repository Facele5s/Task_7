#include "Things.h"

double Complex::get_re_complex() {
	return re;
}

double Complex::get_im_complex() {
	return im;
}

void Complex::set_complex(double r, double i) {
	re = r;
	im = i;
}

void Complex::output_complex() {
	cout << re;
	if (im > 0) cout << "+";
	if (im > 0 || im < 0) cout << im << "i";
}

Complex Complex::sum(Complex a, Complex b) {
	Complex sum;
	sum.set_complex(a.get_re_complex() + b.get_re_complex(), a.get_im_complex() + b.get_im_complex());

	return sum;
}

Complex Complex::diff(Complex a, Complex b) {
	Complex sub;
	sub.set_complex(a.get_re_complex() - b.get_re_complex(), a.get_im_complex() - b.get_im_complex());

	return sub;
}

double Complex::abs() {
	return sqrt(re * re + im * im);
}

double Vector::getX() {
	return x;
}

double Vector::getY() {
	return y;
}

void Vector::setVector(double x, double y) {
	this->x = x;
	this->y = y;
}

void Vector::outputXY() {
	cout << "(" << x << "; " << y << ")";
}

double Vector::length() {
	return sqrt(x * x + y * y);
}

double Vector::scalarMult(Vector a, Vector b) {
	return a.getX() * b.getX() + a.getY() * b.getY();
}


double Circle::getRadius() {
	return radius;
}

string Circle::getColor() {
	return color;
}

void Circle::setCircle(double radius, string color) {
	this->radius = radius;
	this->color = color;
}

double Circle::ring_length() {
	return 2 * 3.14 * radius;
}

double Circle::area() {
	return 3.14 * radius * radius;
}