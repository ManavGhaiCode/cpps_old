# cpps

Cpps is for people who are getting started with C++, pors can also use this for ease of use with C++. Cpps is a a library for c++ which adds abstractions like print functions, input functions, lists, etc. plz see the danger area before doing some thing you don't understand. To get all the extions include the header file in "/path/to/cpps/cpps.h"

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

    ***message*** - You may have see the "**munmap_chunk(): Ivalid pointer**" bug while using consoles I didn't use this function anywhere I can't do anything about this 'cause I didn't use this use it. If you find why it is this happening plz make a pull request on the repo.

4. math

    **decription** - Math is a simple namespace. It has 10 functions. They are -
    * Add - adds a vector of number or two numbers together
    * Subtract - subtracts a vector of number or two numbers
    * multiple - multiples a vector of number or two numbers together
    * divide - divides a vector of number or two numbers
    * Floor - used to turn a float or a double into a int by the decreasing the number
    * Ceil - used to turn a float or a double into a int by the increasing the number
    * tax - used for tax numbers at Indian rates
    * square - squares the number
    * cube - cubes the number
    * percent - return a precentage of a number

5. char-add-ons

    **decription** - this file live in "*/chars/chars.h" the file has 2 functions for array of chars called **ConsvertChar**, **brew** both take in **2 things** the array of chars itself and the size of the array.

    **what does ConsvertChar do?** - it returns an array of strings based on the array that you pass in.

    **what does brew do?** - it compiles a array of chars to a single string.

    **how ConsvertChar works?** - it takes in a array of chars and loops over that array add the char at that point to the string in the return-array, if the char at the point of the array in " " then we make a new string in the return-array.

6. list

    **decription** - It is my take on arrays because I find that c++ arrays are not good and vectors don't store more than one type of nodes but I use JS in JS you can store all types of nodes, I want c++ to be more easy so I tryed to make arrays hold more type of nodes than 1. It has 2 types 1DLists(list), 2DLists(list2D).

    The list class 6 functions -
    * push - to add more elements or nodes to the list
    * at - returns the value of a node at a given index
    * log - prints the list
    * ch_value - change a value of a given node at a give index. It take in the value before the index
    * remove - deletes the node at a given index  
    * pop - remove the node at the larges index
    * get_len - return the length of a list

    I am trying to put more features in the list class.

    Try this code to test the class -

    ```c++
    #include "path/to/cpps/list/list.h"
    #include "path/to/cpps/gp/gp.h"

    int main() {
        list li;

        li.push("hi boiii");
        li.push(47.99);
        li.push(99);

        li.log();

        print(li.at(0)); // the print function is raped a around the list::at function as the list::at function can't print the index the the cli

        ch_value(788.467, 1); // change the the value of node at index 1 in this case

        print(li.at(1)); 
        li.remove(0);
        li.pop(); // removes the 1 in this case

        li.get_len();

        std::cout << li << std::endl; // prints or logs the list using cout
    }
    ```

    Note - Function ch_value() in class list2D.

## Install

to install the repo choose one release -

* [1.3.1](https://github.com/ManavGhaiCode/cpps/releases/tag/1.3.1)
* [1.2.0](https://github.com/ManavGhaiCode/cpps/releases/tag/1.2.0)

and get the zip verson and unzip it.

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

## SORRY

I would like to SORRY because of the 5 typos history. 