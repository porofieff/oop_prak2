#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using namespace std;


class complex
{
    double re, im;
public:
    complex();
    complex(const int&);
    complex operator*(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator/(int);
    friend cmath& operator sqrt(complex&);
   // complex operator-(complex);
    complex operator<(complex);
    complex operator>(complex);
    friend ostream& operator<<(ostream&, complex);
    friend istream& operator>>(istream&, complex&);
};

#endif // COMPLEX_H
