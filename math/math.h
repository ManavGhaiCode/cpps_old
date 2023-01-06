#include <iostream>
#include <vector>
#include <cmath>

#include "../vars.h"
#include "./vars.h"

namespace Math
{
    const double PI = 3.14159265358979323846264338327950288419716939937510;
    const double C = 299792458;
    const double km_C = 29979.2458;
    const double mile_C = 18628.2860054;

    template<typename T> T Floor(T num) {
        return std::floor(num);
    }

    template<typename T> T Ceil(T num) {
        return std::ceil(num);
    }

    template<typename T> double tax(T numToTax) {
        int b1n1 = 250000;
        int b1n2 = 500000;
        int b2n2 = 750000;
        int b3n2 = 1000000;
        int b4n2 = 1250000;
        int b5n2 = 1500000;

        if (numToTax > b1n1) {
            return numToTax;
        } else if (numToTax > b1n1 and numToTax <= b1n2) {
            return numToTax - (numToTax * (5 / 100));
        } else if (numToTax > b1n2 and numToTax <= b2n2) {
            return numToTax - (numToTax * (10 / 100));
        } else if (numToTax > b2n2 and numToTax <= b3n2) {
            return numToTax - (numToTax * (15 / 100));
        } else if (numToTax > b3n2 and numToTax <= b4n2) {
            return numToTax - (numToTax * (20 / 100));
        } else if (numToTax > b1n2 and numToTax <= b5n2) {
            return numToTax - (numToTax * (25 / 100));
        } else {
            return numToTax - (numToTax * (30 / 100));
        }
    }

    template<typename T> T square(T num) {
        return num * num;
    }

    template<typename T> T cube(T num) {
        return num * num * num;
    }

    template<typename T> double percent(T mainNumder, T percent) {
        return mainNumder * (percent / 100);
    }

    template<typename T> double factorial(T numTofactorial) {
        if (numTofactorial == 1) {
            return 1;
        }

        return numTofactorial * factorial(numTofactorial - 1);
    }
};