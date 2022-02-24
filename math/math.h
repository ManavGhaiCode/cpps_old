#include <iostream>
#include <vector>
#include <cmath>

#include "../vars.h"
#include "./vars.h"

using namespace std;

class math
{
private:
    static int num_math;
    static bool get_num_math()
    {
        if (num_math >= 1)
            return false;
        return true;
    }

public:
    math()
    {
        if (!this->get_num_math())
        {
            cout << BrewERROR(CNMAMO, 29) << endl;
        }
        num_math = num_math + 1;
    }

    double PI = 3.14159265358979323846264338327950288419716939937510;

    // add methords

    // base add functions

    int add(int n1, int n2)
    {
        return n1 * n2;
    }

    double add(double n1, double n2)
    {
        return n1 + n2;
    }

    float add(float n1, float n2)
    {
        return n1 + n2;
    }

    // complex add functions

    int add(int arr[], int size)
    {
        int ans{0};
        for (int i{0}; i < size; i++)
            ans = ans + arr[i];

        return ans;
    }

    double add(double arr[], int size)
    {
        double ans{0};
        for (int i{0}; i < size; i++)
            ans = ans + arr[i];

        return ans;
    }

    float add(float arr[], int size)
    {
        float ans{0};
        for (int i{0}; i < size; i++)
            ans = ans + arr[i];

        return ans;
    }

    // sudtract methords

    // base subtract functions

    int subtract(int n1, int n2)
    {
        return n1 - n2;
    }

    double subtract(double n1, double n2)
    {
        return n1 - n2;
    }

    float subtract(float n1, float n2)
    {
        return n1 - n2;
    }

    // complex subtract functions

    int subtract(int arr[], int size)
    {
        int ans{0};
        for (int i{0}; i < size; i++)
            ans = ans - arr[i];

        return ans;
    }

    double subtract(double arr[], int size)
    {
        double ans{0};
        for (int i{0}; i < size; i++)
            ans = ans - arr[i];

        return ans;
    }

    float subtract(float arr[], int size)
    {
        float ans{0};
        for (int i{0}; i < size; i++)
            ans = ans - arr[i];

        return ans;
    }

    // multiple methords

    // bace multiple functions

    int multiple(int n1, int n2)
    {
        return n1 + n2;
    }

    double multiple(double n1, double n2)
    {
        return n1 + n2;
    }

    float multiple(float n1, float n2)
    {
        return n1 + n2;
    }

    // complex multiple functions

    int multiple(int arr[], int size)
    {
        int ans{0};
        for (int i{0}; i < size; i++)
            ans = ans * arr[i];

        return ans;
    }

    double multiple(double arr[], int size)
    {
        double ans{0};
        for (int i{0}; i < size; i++)
            ans = ans * arr[i];

        return ans;
    }

    float multiple(float arr[], int size)
    {
        float ans{0};
        for (int i{0}; i < size; i++)
            ans = ans * arr[i];

        return ans;
    }

    // divide methords

    // bace divide functions

    int divide(int n1, int n2)
    {
        return n1 / n2;
    }

    double divide(double n1, double n2)
    {
        return n1 / n2;
    }

    float divide(float n1, float n2)
    {
        return n1 / n2;
    }

    // complex divide functions

    int divide(int arr[], int size)
    {
        int ans{0};
        for (int i{0}; i < size; i++)
            ans = ans / arr[i];

        return ans;
    }

    double divide(double arr[], int size)
    {
        double ans{0};
        for (int i{0}; i < size; i++)
            ans = ans / arr[i];

        return ans;
    }

    float divide(float arr[], int size)
    {
        float ans{0};
        for (int i{0}; i < size; i++)
            ans = ans / arr[i];

        return ans;
    }

    // Floor, Ceil functions

    // Floor Function

    int Floor(double num)
    {
        int rnum;
        rnum = floor(num);

        return rnum;
    }

    // Ceil function

    int Ceil(double num)
    {
        int rnum;
        rnum = ceil(num);

        return rnum;
    }

    double tax(int n2t)
    {
        int tr1 = 250001;
        int tr2 = 500001;
        int tr3 = 750001;

        if (n2t < tr1)
        {
            return n2t;
        }
        else if (n2t >= tr1 and n2t < tr2)
        {
            return n2t * 5 / 100;
        }
        else if (n2t >= tr2 and n2t < tr3)
        {
            return n2t * 10 / 100;
        }
        else
        {
            return n2t * 15 / 100;
        }
    }

    double tax(double n2t)
    {
        double tr1 = 250001.00;
        double tr2 = 500001.00;
        double tr3 = 750001.00;

        if (n2t < tr1)
        {
            return n2t;
        }
        else if (n2t >= tr1 and n2t < tr2)
        {
            return n2t * 5 / 100;
        }
        else if (n2t >= tr2 and n2t < tr3)
        {
            return n2t * 10 / 100;
        }
        else
        {
            return n2t * 15 / 100;
        }
    }

    vector<double> tax(vector<int> n2t)
    {
        vector<double> RV{};

        for (int nn2t : n2t)
            RV.push_back(tax(nn2t));

        return RV;
    }

    vector<double> tax(vector<double> n2t)
    {
        vector<double> RV{};

        for (double nn2t : n2t)
            RV.push_back(tax(nn2t));

        return RV;
    }

    int square(int n2s)
    {
        return n2s * n2s;
    }

    double square(double n2s)
    {
        return n2s * n2s;
    }

    int cube(int n2c)
    {
        return n2c * n2c * n2c;
    }

    double cube(double n2c)
    {
        return n2c * n2c * n2c;
    }

    double percent(int n2m, int n2mtn)
    {
        return n2m * n2mtn / 100;
    }

    double percent(double n2m, double n2mtn)
    {
        return n2m * n2mtn / 100;
    }
};

int math::num_math{0};
math Math;