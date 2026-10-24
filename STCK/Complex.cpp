#include <iostream>
#include "Complex.h"
using namespace std;


Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}

Complex Complex::operator+(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}

Complex Complex::operator+(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img + 0.0 ;
	return *res;
	
}

Complex Complex::operator-(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complex Complex::operator-(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - a;
	res->img = this->img - 0.0;
	return *res;

}

Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = (re * c.re) -(img * c.img);
	res->img = (re * c.img) + (img * c.re);
	return *res ;
}

Complex Complex::operator*(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = re *a;
	res->img = img *a;
	return *res;

}

Complex Complex::operator/(Complex c) const
{
	double d = c.re * c.re + c.img * c.img;
	if (d == 0) 
		cout<<"impossible" << endl;
	return Complex(0, 0);
	Complex* res = new Complex(0.0, 0.0); 
	res->re = ((re * c.re) - (img * c.img)) / d;
	res->img = ((img * c.re) + (re * c.img)) / d;
	return *res ;
}

Complex Complex::operator/(double a) const
{
	if (a == 0)
		return Complex(0,0);
	Complex* res = new Complex(0.0, 0.0);
	res->re = re / a;
	res->img = img / a;
	return *res;
}
bool Complex::operator==( Complex c) const {
	return (this->re == c.re && this->img == c.img);
}
bool Complex::operator<( Complex c) const {
	double a = (this->re * this->re) + (this->img * this->img);
	double b = (c.re * c.re) + (c.img * c.img);
	return a < b;
}

bool Complex::operator>( Complex c) const {
	return c < *this; 
}
bool Complex::operator!=( Complex c) const {
	
	if (this->re != c.re || this->img != c.img) {
		return true;  
	}
	else {
		return false; 
	}
}

bool Complex::operator<=( Complex c) const {
	
	double a= (this->re * this->re) + (this->img * this->img);
	double b = (c.re * c.re) + (c.img * c.img);

	
	if (a < b || a == b) {
		return true;
	}
	else {
		return false;
	}
}

bool Complex::operator>=( Complex c) const {

	double a = (this->re * this->re) + (this->img * this->img);
	double b = (c.re * c.re) + (c.img * c.img);


	if (a > b || a == b) {
		return true;
	}
	else {
		return false;
	}
}






void Complex::afficher() const
{
	cout << re << " + i" << this->img << endl;
}

Complex::~Complex()
{
}
