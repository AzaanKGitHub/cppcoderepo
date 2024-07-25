// FundamentalsC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
// Pre-processor directive that instructs the compiler to locate the file that contains code for the library known as 'iostream'.

// This is defines the main function with a return value of int. 
int main()
{
    std::cout << "Hello World!\n" << std::endl;
    // std::cout is used for output.
    // The << operator is used to send the string "Hello World!" to std::cout.
    // std::endl is used to insert a newline character into the output stream.

    return 0; // returns the int value of 0, indidcating the successful execution of the program.
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
