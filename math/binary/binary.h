#include <iostream>

#include "./binaryTypes/bit.h"
#include "./binaryTypes/bite.h"

class Intger {
    private:
        bool sign = 1;
        bit registers[52];

    public:
        Intger(int in_value) {
            set_value(in_value);
        }

        void set_value(int new_value) {
            if (new_value > 4503599627370495) {
                std::cerr << "Error: can't hold a number larger than 4503599627370495" << std::endl;
                std::exit(1);
            } else if (new_value < -4503599627370495) {
                std::cerr << "Error: can't hold a number larger than 4503599627370495" << std::endl;
                std::exit(1);
            } else {
                if (new_value > 0) {
                    sign = 1;

                    bit mean_bits[52];

                    for (int i = 0; i < 52; i++) {
                        mean_bits[i].set_value(0);
                    }

                    for (int i = 0; new_value > 0; i++) {
                        mean_bits[i].set_value(new_value % 2);
                        new_value /= 2;
                    }

                    for (int i = 0; i < 52; i++) {
                        registers[i].set_value(mean_bits[i].get_value());
                    }
                }
            }
        }

        int get_value() {
            int covert_BATB = 0;

            for (int i = 0; i < 52; i++) {
                int inter_i = 1;

                for (int j = 0; j < i; j++) {
                    inter_i *= 10;
                }
                
                covert_BATB += registers[i].get_value() * inter_i;
            }

            int decimal_out = 0;
            int temp = covert_BATB;
            int base = 1;

            while (temp) {
                int last_digit = temp % 10;
                temp = temp / 10;
 
                decimal_out += last_digit * base;
 
                base = base * 2;
            }

            return decimal_out;
        }
};