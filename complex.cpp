#include "complex.h"
#include <cmath>

complex::complex() {}
complex::complex(double r, double i)
{
    re = r;
    im = i;
}
ostream& operator<<(ostream& os, complex c)
{
    os << c.re << "+" << c.im << "i";
    return os;
}
istream& operator>>(istream& is, complex& c)
{
    is >> c.re >> c.im;
    return is;
}
complex complex::operator*(complex c)
{
    complex t;
    t.re = re * c.re - im * c.im;
    t.im = re * c.im + im * c.re;
    return t;
}
complex complex::operator+(complex c)
{
    complex t;
    t.re = re + c.re;
    t.im = im + c.im;
    return t;
}
complex complex::operator-(complex c)
{
    complex t;
    t.re = re - c.re;
    t.im = im - c.im;
    return t;
}
complex complex::operator/(int c)
{
    complex t;
    t.re = re / c;
    t.im = im / c;
    return t;
}
/*complex complex:: operator-(complex)
{
    complex t;
    t.re = re;
    t.im = -im;
    return t;
};*/
bool complex::operator<(complex c)
{
    bool res = false;
    int m1;
    int m2;
    m1 = sqrt(re * re + im * im);
    m2 = sqrt(c.re * c.re + c.im * c.im);
    if (m1 < m2) res = true;
    return res;
}
bool complex::operator>(complex c)
{
    bool res = false;
    int m1;
    int m2;
    m1 = sqrt(re * re + im * im);
    m2 = sqrt(c.re * c.re + c.im * c.im);
    if (m1 > m2) res = true;
    return res;
}

complex sqrt(complex c)
{
    complex t;
    t.re = sqrt((sqrt(c.re*c.re + c.im*c.im) + c.re) / 2);
    t.im = sqrt((sqrt(c.re*c.re + c.im*c.im) - c.re) / 2);

    if(c.im < 0)
    {
        t.im = t.im * -1;
    }

    return t;
}
