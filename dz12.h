#ifndef DZ12_H
#define DZ12_H
#include <iostream>
#include <string>
using namespace std;

template <typename Type>
class Calculator
{
private:
	Type a;
	Type b;
public:
	Calculator() : a(0), b(0) {};
	Calculator(Type a, Type b) {
		this->a = a;
		this->b = b;
	};
	Type sum(Type a, Type b) {
		return a + b;
	};
	Type subtract(Type a, Type b) {
		return a - b;
	};
	Type division(Type a, Type b) {
		return a / b;
	};
	Type multiply(Type a, Type b) {
		return a * b;
	}
	;
	~Calculator() {};
};



class Complex {
private:
	double im;
	double re;
public:
	Complex();
	Complex(double re, double im);
	Complex(const Complex& other);
	friend ostream& PrintComplex(ostream& os, const Complex& other);
	friend Complex Substruction (Complex c1, Complex c2);
	friend Complex Summ (Complex c1, Complex c2);
	friend Complex Multiply (Complex c1, Complex c2);
	friend Complex Division (Complex c1, Complex c2);
	~Complex();

};


#endif