#include <iostream>

class bit {
    private:
        bool value;
    
    public:
        void set_value(int new_value) {
            if (new_value == 1) {
                value = 1;
                return; 
            } else if (new_value == 0) {
                value = 0;
                return; 
            }

            std::cerr << "Error: can't set the given value of " << new_value << std::endl;
            std::exit(1);
        }

        int get_value() {
            if (value) return 1;
            return 0;
        }
};