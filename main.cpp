#include "Dz12.h"

int main() {
	setlocale(0, "");
	int a = 4, b = 22;
	Calculator<int> A(a, b);
	cout << A.division(a, b) << endl;
	Complex c1(5, 6), c2(2, 8);
	Calculator <Complex> B(c1, c2);
	double d1 = 1.2, d2 = 3.4;
	Calculator <double> C(d1, d2);
	cout << C.multiply(d1, d2) << endl;
	string s1 = "66", s2 = "8";
	Calculator <string> D(s1, s2);
	cout << D.sum(s1, s2) << endl;
}