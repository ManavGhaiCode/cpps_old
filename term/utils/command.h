#include <iostream>

#include "./functions.h"

void do_command(std::string prompt)
{
    if (prompt == "Hello")
        hello();

    else if (prompt == "Hi")
        hi();
}