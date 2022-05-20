#include "dz12.h"

Complex::Complex() : im(0), re(0)
{
}

Complex::Complex(double re, double im)
{
	this->im = im;
	this->re = re;
}

Complex::Complex(const Complex& other)
{
	im = other.im;
	re = other.re;
}
ostream& PrintComplex(ostream& os, const Complex& other) {
	if (other.im >= 0) {
		os << other.re << '+' << other.im << 'i';
	}
	else {
		os << other.re << other.im << 'i';
	}
	return os;
}

Complex Summ(Complex c1, Complex c2)
{
	return Complex(c1.re + c2.re, c1.im + c2.im);
}
 
Complex Substruction (Complex c1, Complex c2)
{
	return Complex(c1.re - c2.re, c1.im - c2.im);
}

Complex Multiply(Complex c1, Complex c2)
{
	return Complex(c2.re * c1.re - c2.im * c1.im, c2.im * c1.re + c2.re * c1.im);
}

Complex Division(Complex c1, Complex c2)
{
	Complex c(0, 0); double r;
	r = c1.re * c1.re + c2.im * c2.im;
	c.re = (c2.re * c1.re + c2.im * c1.im) / r;
	c.im = (c2.im * c1.re - c2.re * c1.im) / r;
	return c;
}

Complex::~Complex()
{
}