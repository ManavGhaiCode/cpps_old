#ifndef _BIT_H_
#define _BIT_H_

#include <iostream>

class bit {
    private:
        bool value;
    
    public:
        bit();
        
        bit(int val) {
            set_value(val);
        }   

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

        void set_value(bool new_value) {
            if (new_value) {
                value = 1;
                return;
            } else if (!new_value) {
                value = 0;
                return;
            }
        }

        int get_value() {
            if (value) return 1;
            return 0;
        }
};

#endif