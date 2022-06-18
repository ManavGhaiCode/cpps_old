#include <iostream>
#include <functional>

#include "./time.hpp"

class global
{
    private:
        static int ng;
        static bool get_num_global() { return ( ng > 0 ) ? true : false; }
    public:
        global() {
            if (this->get_num_global())
            {
                std::cerr << "ERROR cannot make another Global object." << std::endl;
                std::exit(1);
            }

            this->ng += 1;
        }

        Time time;
};

int global::ng {0};
global Global;