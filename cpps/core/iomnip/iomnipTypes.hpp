#include <iostream>
#include <iomanip>

struct IntType {
    private:
        static int numIntType;
        static bool getNumIntType() { return numIntType >= 1 ? true : false; }

    public:

    IntType() {
        if (!this->getNumIntType()) { numIntType += 1; } else {
            std::cerr << "The object has been made." << std::endl;
            std::exit(1);
        }
    }

    void hex() {
        std::cout << std::hex;
    }

    void oct() {
        std::cout << std::oct;
    }

    void dec() {
        std::cout << std::dec;
    }

    void upperCase() {
        std::cout << std::uppercase;
    }

    void lowerCase() {
        std::cout << std::nouppercase;
    }

    void showbase() {
        std::cout << std::showbase;
    }

    void showpos() {
        std::cout << std::showpos;
    }

    void showpoints() {
        std::cout << std::showpoint;
    }

    void precision(int precisionNum, bool fixedValue = true) {
        std::cout << std::setprecision(precisionNum);

        if (fixedValue == false) {
            this->stop_fix();
        } else {
            this->fix();
        }
    }

    void scientific() {
        std::cout << std::scientific;
    }

    void fix() {
        std::cout << std::fixed;
    }

    void stop_showbase() {
        std::cout << std::noshowbase;
    }

    void stop_showpos() {
        std::cout << std::noshowpos;
    }

    void stop_showpoints() {
        std::cout << std::noshowpoint;
    }

    void stop_scientific() {
        std::cout << std::resetiosflags(std::ios::scientific);
    }

    void stop_fix() {
        std::cout << std::resetiosflags(std::ios::fixed);
    }

    void reset() {
        this->showbase();
        this->stop_showpos();
        this->precision(8);
        this->dec();
        this->stop_scientific();
        this->fix();
    }

    void CPPReset() {
        this->stop_showbase();
        this->stop_showpos();
        this->precision(6);
        this->dec();
        this->stop_scientific();
        this->stop_fix();
    }
};

int IntType::numIntType = 0;

struct BoolType {
    private:
        static int numBoolType;
        static bool getNumBoolType() { return numBoolType >= 1 ? true : false; }

    public:

    BoolType() {
        if (!this->getNumBoolType()) { numBoolType += 1; } else {
            std::cerr << "The object has been made." << std::endl;
            std::exit(1);
        }
    }

    void strform() {
        std::cout << std::boolalpha;
    }

    void stop_strform() {
        std::cout << std::noboolalpha;
    }

    void reset() {
        this->strform();
    }

    void CPPReset() {
        this->stop_strform();
    }
};

int BoolType::numBoolType = 0;

struct GenType
{
    private:
        static int numGenType;
        static bool getNumGenType() { return numGenType >= 1 ? true : false; }

    public:

    GenType() {
        if (!this->getNumGenType()) { numGenType += 1; } else {
            std::cerr << "The object has been made." << std::endl;
            std::exit(1);
        }
    }

    void fill(char fillChar) {
        std::cout << std::setfill(fillChar);
    }

    void setw(int num) {
        std::cout << std::setw(num);
    }

    void left() {
        std::cout << std::left;
    }

    void reset() {
        this->fill('-');
    }

    void CPPReset() {
        this->fill(' ');
    }
};

int GenType::numGenType = 0;