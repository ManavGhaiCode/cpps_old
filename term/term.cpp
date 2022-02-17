#include <iostream>
#include "string"

#include "../gp/gp.h"
#include "./utils/cheaks.h"
#include "./utils/command.h"

int main()
{
    while (true)
    {
        print("");
        std::string Prompt = input("Input: ");

        if (cheak_input(Prompt))
        {
            do_command(Prompt);
        }
    }
}