#pragma once

#include <iostream>
using namespace std;

namespace de {

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);

	double getReal() const {
		return real;
	}
	double getImaginary() const {
		return imaginary;
	}
};

ostream &operator<<(ostream &out, const Complex &c);

}