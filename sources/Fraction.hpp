#pragma once

#include <iostream>

using namespace std;

namespace ariel
{
    class Fraction
    {
        int numerator;
        int denominator;

    public:
        Fraction(int num = 0, int den = 1);
        Fraction(float flt);
        Fraction(Fraction &frac);
        ~Fraction();

        Fraction operator+(const Fraction &other) const;
        Fraction operator-(const Fraction &other) const;
        Fraction operator*(const Fraction &other) const;
        Fraction operator/(const Fraction &other) const;
        friend Fraction operator+(const Fraction &other, float flt);
        friend Fraction operator-(const Fraction &other, float flt);
        friend Fraction operator*(const Fraction &other, float flt);
        friend Fraction operator/(const Fraction &other, float flt);
        friend Fraction operator+(float flt, const Fraction &other);
        friend Fraction operator-(float flt, const Fraction &other);
        friend Fraction operator*(float flt, const Fraction &other);
        friend Fraction operator/(float flt, const Fraction &other);

        // comparison operators
        bool operator==(const Fraction &other) const;
        bool operator!=(const Fraction &other) const;
        bool operator>(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;
        friend bool operator==(const Fraction &other, float flt);
        friend bool operator!=(const Fraction &other, float flt);
        friend bool operator>(const Fraction &other, float flt);
        friend bool operator<(const Fraction &other, float flt);
        friend bool operator>=(const Fraction &other, float flt);
        friend bool operator<=(const Fraction &other, float flt);
        friend bool operator==(float flt, const Fraction &other);
        friend bool operator!=(float flt, const Fraction &other);
        friend bool operator>(float flt, const Fraction &other);
        friend bool operator<(float flt, const Fraction &other);
        friend bool operator>=(float flt, const Fraction &other);
        friend bool operator<=(float flt, const Fraction &other);

        // increment and decrement operators
        Fraction &operator++();   // prefix
        Fraction operator++(int); // postfix
        Fraction &operator--();   // prefix
        Fraction operator--(int); // postfix

        // stream insertion and extraction operators
        friend ostream &operator<<(ostream &os, const Fraction &fraction);
        friend istream &operator>>(istream &is, Fraction &fraction);
    };





}