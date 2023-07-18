// TechAcademyBootcampBasicApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //angle brackets as it is C++ standart Library
#include "Calculator.h"//to access calculator class

using namespace std; //to easily apply std::

int main()

{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    
    cout << "Calculator Console Application!" << endl << endl;
    cout << "Please enter an operation to perform. Format: a + b| a - b | a * b | a / b "  
        << endl;

    Calculator c;//declare instance of Calculator class
    while (true)
    {
        cin >> x >> oper >> y;//get user input for variables
        if (oper == '/' && y == 0) //checks for division by zero
        {
            cout << "Division by zero is prohibited!" << endl;
            continue;
        }
        else {
            result = c.Calculate(x, oper, y); //execute Calculate function
        }
        cout << "Result is: " << result << endl; 
    }
    return 0;

}

