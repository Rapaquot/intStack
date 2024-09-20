/* *************************************************
 *  Name: Rodrigo A. Guerrero Paquot
 *  Assignment: Simple Int Stack
 *  Purpose: The purpose of this assignment is to develop a functional integer stck class,
 * following the gien specifications and industry best practices.
 ************************************************* */

#include "main.h"
#include <iostream>

int main()
{
    Stack myStack1;

    if (myStack1.push(26))
    {
        std::cout << "Push was a success" << std::endl;
    }
    else
    {
        std::cout << "Push did not go through" << std::endl;
    }

    return 0;
}