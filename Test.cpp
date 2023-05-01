#include "doctest.h"
#include "sources/Fraction.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;
using namespace ariel;

TEST_CASE("should fail where fraction denominator is zero"){
    srand((unsigned)time(NULL));
    int random=rand();
    CHECK_NOTHROW(Fraction(random, 1));
    CHECK_THROWS(Fraction(random,0));
}

TEST_CASE("check operators +, -, *, /"){
    Fraction frac1(0,1), frac2(1,2), frac3(2,4), frac4(1,1), result;
    result=frac1+frac3;
    CHECK(result==0.5);
    result=frac3-frac1;
    CHECK(result==0.5);
    result=frac4*frac3;
    CHECK(result==0.5);
    result=frac3/frac4;
    CHECK(result==0.5);
    result=frac1*frac2;
    CHECK(result==0);
    CHECK_THROWS(frac2/frac1);
}

TEST_CASE("check operators ++, --"){
    Fraction frac1(1,3), frac2(1,3), frac3(4,3);
    CHECK(frac1 == frac1++);
    CHECK(frac1==frac2+1);
    CHECK(++frac1==frac1+1);
    CHECK(frac3==frac3--);
    CHECK(frac3==frac1);
    CHECK(frac3 == frac3-1);
    for (int i=0; i<5; i++){
        frac1++;
    }
    CHECK(frac1== frac1+5);
}

TEST_CASE("check operators <, >, <=, >=, =="){
    Fraction frac1(1,2), frac2(3,6), frac3(3,2);
    CHECK(frac1==frac2);
    CHECK(frac1<=frac2);
    CHECK(frac1<=frac2);
    CHECK(frac1<frac3);
    CHECK(frac3>frac2);
    for(int i=0; i<5; i++) frac1++;
    CHECK(frac1>frac2);
    CHECK(frac2<frac1);
}