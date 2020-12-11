// This program is going to ask the user to enter their favorite number 
// in between 1-100-
//Identifier
#include <iostream>
//Identifier

/*
Every C++ program must have exactly 1 main() function

Starting point of program executiom
return 0 indicates successful program execution
*/
int main() {
    //a var for store what the user inputed
    int favorite_number;
    int worst_number;
    //outputing,//Identifier
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    //input.
    std::cout << "Enter your unfavored number between 1 and 100: ";
    std::cin >> worst_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No Really!!," << favorite_number << " is my favorite number" << std::endl;
    std::cout << "Actually," << worst_number << " is my unfavored number" << std::endl;
    return 0;
}
//Compiler errors -> make my code to machnine code
//Syntax errors - something wrong with the structure
//Semantic errors - something wrong with meaning e.g)a+b; a is a person.


//compiler warning -> The compiler has recongnized an issue with your code that 
//could lead to a potnetial problem
// It's only a warning because the compiler is still able to generate
//correct machine code.

//Linker Errors -> It is having trouble linking all the object files together
//to create an executable
//Usually there is a library or object file that is missing

//Runtime Errors -> Errors that occur when the program is executing
// Some typical runtime errors -> Divide by zero / Rile not found / Out of memory
// Can cause your program to 'crash'
// Exception Handling can help deal with runtime errors

//Logic Errors -> Errors or bugs in your code that cause your program to run incorrectly
//Logic errors are mistakes made by the programmer
//Suppose we have a program that determines if a person can vote in an election
//and you must be 18 years or older to vote

