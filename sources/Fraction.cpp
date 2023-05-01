#include <iostream>
#include "Fraction.hpp"

namespace ariel
{
    Fraction::Fraction(int num, int den)
    {
    }

    Fraction::Fraction(Fraction &frac)
    {
        this->numerator = frac.numerator;
        this->denominator = frac.denominator;
    }

    Fraction::Fraction(float flt)
    {
        this->numerator = 0;
        this->denominator = 1;
    }

    Fraction::~Fraction()
    {
    }

    Fraction Fraction::operator+(const Fraction &other) const
    {
        return Fraction(other.numerator + this->numerator, other.denominator + this->denominator);
    }
    Fraction Fraction::operator-(const Fraction &other) const
    {
        return Fraction(other.numerator - this->numerator, other.denominator - this->denominator);
    }
    Fraction Fraction::operator*(const Fraction &other) const
    {
        return Fraction(other.numerator * this->numerator, other.denominator * this->denominator);
    }
    Fraction Fraction::operator/(const Fraction &other) const
    {
        return Fraction(this->numerator * other.denominator, this->denominator * other.numerator);
    }
    Fraction operator+(const Fraction &other, float flt)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator-(const Fraction &other, float flt)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator*(const Fraction &other, float flt)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator/(const Fraction &other, float flt)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator+(float flt, const Fraction &other)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator-(float flt, const Fraction &other)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator*(float flt, const Fraction &other)
    {
        return Fraction(other.numerator, other.denominator);
    }
    Fraction operator/(float flt, const Fraction &other)
    {
        return Fraction(other.numerator, other.denominator);
    }

    // comparison operators
    bool Fraction::operator==(const Fraction &other) const
    {
        if (this->denominator == other.denominator && this->numerator == other.numerator)
        {
            return true;
        }
        return false;
    }
    bool Fraction::operator!=(const Fraction &other) const
    {
        if (this->denominator == other.denominator && this->numerator == other.numerator)
        {
            return false;
        }
        return true;
    }
    bool Fraction::operator>(const Fraction &other) const { return true; }
    bool Fraction::operator<(const Fraction &other) const { return true; }
    bool Fraction::operator>=(const Fraction &other) const { return true; }
    bool Fraction::operator<=(const Fraction &other) const { return true; }
    bool operator==(const Fraction &other, float flt) { return true; }
    bool operator!=(const Fraction &other, float flt) { return true; }
    bool operator>(const Fraction &other, float flt) { return true; }
    bool operator<(const Fraction &other, float flt) { return true; }
    bool operator>=(const Fraction &other, float flt) { return true; }
    bool operator<=(const Fraction &other, float flt) { return true; }
    bool operator==(float flt, const Fraction &other) { return true; }
    bool operator!=(float flt, const Fraction &other) { return true; }
    bool operator>(float flt, const Fraction &other) { return true; }
    bool operator<(float flt, const Fraction &other) { return true; }
    bool operator>=(float flt, const Fraction &other) { return true; }
    bool operator<=(float flt, const Fraction &other) { return true; }

    // increment and decrement operators
    // prefix
    Fraction &Fraction::operator++()
    {
        this->numerator += this->denominator;
        return *this;
    }
    // postfix
    Fraction Fraction::operator++(int)
    {
        return Fraction(*this);
    }
    Fraction &Fraction::operator--()
    {
        this->numerator -= this->denominator;
        return *this;
    }
    Fraction Fraction::operator--(int)
    {
        return Fraction(*this);
    }

    ostream &operator<<(ostream &os, const Fraction &frac)
    {
        os << frac.numerator << '/' << frac.denominator;
        return os;
    }
    istream &operator>>(istream &is, Fraction &fraction)
    {
        int numerator, denominator;
        char slash;
        is >> numerator >> slash >> denominator;
        fraction = Fraction(numerator, denominator);
        return is;
    }
}