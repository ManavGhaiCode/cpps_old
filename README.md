# cpps
cpps is a a library for c++ which adds abstractions like print functions, input functions, Consoles like Consoles in JS but much better, a dev only terminal, etc.

# Extions

1. Print

    **description** - print is a function with 10+ overloads to print **Vectors**, **Strings**, **Chars**, **ints** and **Arrays**. It can be usefull in building *clis*(*commend line interpases*).

    **how it works?** - It takes in one argument to print out the infomation into the *commend line*.

2. Input

    **description** - input is a function with 0 overloads to prompt the user about anything can also be vary usefull in making *clis*(*commend line interpases*).

    **how it works?** - it takes in one argument to print out the prompt than ask the use for the input.

3. Console

    **decription** - Console is a class which helps you make make instances of the same code by runing the code once. // Note if you make many instances it may use too much **ram**, for small projects we recomend 4-6 instances and for bigger projects 2-3 instances.

    **how it works?** - It take in a function which in an int function, takes in a array of strings and then run the function on its own.

    **how to use?** - 

    ```c++
    #include <iostream>
    #include "console.h"

    using namespace std;

    int lol(string[])
    {
        cout << "lol" << endl;
    }

    Console con {lol};
    ```

4. math

    **decription** - math is a very simple object with 6 functions add, subtract, multiple, divide, Floor, Ceil. You shold have under-stood what the functions do by now.

# DANGER!

1. infinity Consoles - if we run the following code it can cause in infinity consoles and a blue screen of death on Windows. Note plz dont run the following code.

```c++
#include "console.h"
#include "print"
#include <string>

int lolInfinity()
{
    Console con {lolInfinity};
    print("lol")
}

Console conmain {lolInfinity};
```

In the following code it looks like only 2 console are created but if you think about the lolInfinity is a recursive function u make a console which makes console and the console which was made also makes consoles and so no. 🌋🌋🌋 no more ram left ):

# Install

to install the repo choose one release -

    [1.2.0](https://github.com/ManavGhaiCode/cpps/releases/tag/1.2.0)

and get the zip verson and unzip it.

# SORRY

I would like to SORRY because of the 3 typos in this repo this was made with a very bad membrane keybord.