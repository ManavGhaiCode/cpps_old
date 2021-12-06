#include <iostream>
#include <vector>

using namespace std;

class Math
{
    private:
        static int num_math;
        static bool get_num_math() { if (num_math >= 1) { return false; } else { return true; }}
    public:
        Math()
        {
            if (!this->get_num_math())
            {
                cout << "ERROR cannot make another Math obj." << endl;
            }
            num_math = num_math + 1;
        }

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
            int ans {0};
            for (int i {0}; i < size; i++)
                ans = ans + arr[i];

            return ans;
        }
        
        double add(double arr[], int size)
        {
            double ans {0};
            for (int i {0}; i < size; i++)
                ans = ans + arr[i];

            return ans;
        }

        float add(float arr[], int size)
        {
            float ans {0};
            for (int i {0}; i < size; i++)
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
            int ans {0};
            for (int i {0}; i < size; i++)
                ans = ans - arr[i];

            return ans;
        }

        double subtract(double arr[], int size)
        {
            double ans {0};
            for (int i {0}; i < size; i++)
                ans = ans - arr[i];

            return ans;
        }

        float subtract(float arr[], int size)
        {
            float ans {0};
            for (int i {0}; i < size; i++)
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
            int ans {0};
            for (int i {0}; i < size; i++)
                ans = ans * arr[i];

            return ans;
        }

        double multiple(double arr[], int size)
        {
            double ans {0};
            for (int i {0}; i < size; i++)
                ans = ans * arr[i];

            return ans;
        }

        float multiple(float arr[], int size)
        {
            float ans {0};
            for (int i {0}; i < size; i++)
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
            int ans {0};
            for (int i {0}; i < size; i++)
                ans = ans / arr[i];

            return ans;
        }

        double divide(double arr[], int size)
        {
            double ans {0};
            for (int i {0}; i < size; i++)
                ans = ans / arr[i];

            return ans;
        }

        float divide(float arr[], int size)
        {
            float ans {0};
            for (int i {0}; i < size; i++)
                ans = ans / arr[i];

            return ans;
        }
};