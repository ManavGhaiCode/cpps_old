#include <iostream>
#include <vector>

#include "./math.h"
#include "../gp/printExtion/print.h"

using namespace std;

int main()
{
    vector<int> Vect1{1, 2398, 845839487, 7899998, 958499, 888};
    vector<double> Vect2{1.34, 2398.873928, 845839487.349, 78999099.01, 9584.0088, 888.234556};

    vector<int> TaxVect1 = Math.tax(Vect1);
    vector<double> TaxVect2 = Math.tax(Vect2);

    print(Vect1);
    print(TaxVect1);
    print(Vect2);
    print(TaxVect2);

    return 0;
}