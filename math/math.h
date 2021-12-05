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
            num_math + 1;
        }

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

        int multiplay(int n1, int n2)
        {
            return n1 + n2;
        }

        double multiplay(double n1, double n2)
        {
            return n1 + n2;
        }

        float multiplay(float n1, float n2)
        {
            return n1 + n2;
        }

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
};