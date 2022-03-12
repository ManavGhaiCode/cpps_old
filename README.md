# cpps
cpps is a a library for c++ which adds abstractions like print functions, input functions, Consoles like Consoles in JS but much better, etc. plz see the danger area before doing some thing you don't understand. To get all the extions include the header file in "/path/to/cpps/cpps.h"

## Extions

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

    **decription** - math is a very simple namespace with 6 functions add, subtract, multiple, divide, Floor, Ceil, tax square, cube, percent. You shold have under-stood what the functions do.

    **eg** - 

    ```c++
    #include <iostream>

    #include "path/to/cpps/cpps.h"

    int func(string[]) 
    {
        print(Math::add(1, 78));
        print(Math::add(1.745, 78.9475));

        print(Math::tax(70000078834));
    }

    Console con{func};
    ```

5. char-add-ons

    **decription** - this file live in "*/chars/chars.h" the file has 2 functions for array of chars called **ConsvertChar**, **brew** both take in **2 things** the array of chars itself and the size of the array.

    **what does ConsvertChar do?** - it returns an array of strings based on the array that you pass in.

    **what does brew do?** - it compiles a array of chars to a single string.

    **how ConsvertChar works?** - it takes in a array of chars and loops over that array add the char at that point to the string in the return-array, if the char at the point of the array in " " then we make a new string in the return-array.

6. list

    **decription** - It is my take on arrays because i find that c++ arrays are not good and vectors don't store more than one type of nodes but I am use JS in JS you can store all types of nodes I want c++ to be more easy so I tryed to make arrays hold more type of nodes than 1.

    **Waht function to use?** - there are 4 functions to use there are - 

    "add" - It add node to the list.

    e.g. - 

    ```c++
    #include <iostream>

    #include "./list/list.h"

    int main() {
        list li;

        li.add("hi boiii");
        li.add(47.99);
        li.add(99);

        li.log();
    }
    ```

    "at" - It gets a node's value at a index.

    e.g. - 

    ```c++
    #include <iostream>

    #include "./list/list.h"

    int main() {
        list li;

        li.add("hi boiii");
        li.add(47.99);
        li.add(99);

        li.at(0, s);
    }
    ```

    "log" - It can be used to get the values in the list you can also use cout with this class.

    e.g. - 

    ```c++
    #include <iostream>

    #include "./list/list.h"

    int main() {
        list li;

        li.add("hi boiii");
        li.add(47.99);
        li.add(99);

        li.log();
    }
    ```

    "chValue" - chValue stands for change value it is use tochange the value.

    .e.g -

    ```c++
    #include <iostream>

    #include "./list/list.h"

    int main() {
        list li;

        li.add("hi boiii");
        li.add(47.99);
        li.add(99);

        li.chValue(2, 888);
        li.log();
    }
    ```

    I am trying to put more features in the list class.

    Try this code to test the class -

    ```c++
    #include <iostream>

    #include "./list/list.h"

    int main() {
        list li;

        li.add("hi boiii");
        li.add(47.99);
        li.add(99);

        li.log();

        std::cout << li << std::endl;
    }
    ```

    **What are the vars "i", "d", "s" ?** - **"i"**, **"d"**, **"s"** are special var which allow you to access a value at an index in a list.

## Install

to install the repo choose one release -

[1.2.0](https://github.com/ManavGhaiCode/cpps/releases/tag/1.2.0)
[1.3.1](https://github.com/ManavGhaiCode/cpps/releases/tag/1.3.1)

## DANGER!

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

In the following code it looks like only 2 console are created but if you think about the lolInfinity is a recursive function you make a console which makes console and the console which was made also makes consoles and so on. 🌋🌋🌋 no more ram left ):


and get the zip verson and unzip it.

## SORRY

I would like to SORRY because of the 5 typos history.