#include <iostream>

#include "./vars.h"

bool cheak_input(std::string prompt)
{
    for (const std::string valInput : ValInputs)
        if (prompt == valInput)
            return true;

    return false;
}