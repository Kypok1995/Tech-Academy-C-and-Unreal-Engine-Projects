// CPlusChallanges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

int main()
{
    const int minuteInHour = 60;//const keyword make a variable not changiable 
    const int secondsInMinute = 60;
    string greeting = "Hello, ";
    string name = "Andrucha!";

    //cout << "Enter amount of hours and program will calculate amount of minutues and seconds!\n" << endl;

    int amountofHours;

   /* cin >> amountofHours;

    cout << "In " << amountofHours << " hours will be: " << minuteInHour * amountofHours << " minutes and: " << amountofHours * minuteInHour * secondsInMinute << " seconds" << endl;*/

    //cout << greeting + name << endl; //to concatenate a string
    //cout << greeting.length() << endl;//method to show length of the string
    //cout << greeting[3] << endl;//to access strings 3rd character
    //greeting[5] = 'O';//to access and modify any character in the string
    //cout << greeting << endl;

    //utilizing math operators
    int x, y;
    cout << "Please type any two whole numbers" << endl;

    cin >> x >> y;

    //cout << "Result of its addition will be: " << x + y << endl;
    //cout << "Result of its subtraction will be: " << x - y << endl;
    //cout << "Result of its multiplication will be: " << x * y << endl;
    //cout << "Result of its division will be: " << x / y << endl;
    //cout << "Result of first number incremention will be: " << ++x << endl;

    //COMPARISON operators
    //cout << "Number one is bigger than number two: " << (x > y) << endl;
    //cout << "Number one is equal to number two: " << (x == y) << endl;
    //cout << "Number one is not equal to number two: " << (x != y) << endl;
    //cout << "Number one is equal or smaller than number two: " << (x <= y) << endl;

    //Assigment operators

    cout << "Here is assigment operator: " << (x = 10) << x << endl;//print 10 no matter what value was assigned initially
    cout << "Here is addition assignment: " << (x += y) << endl;//add value of y to x

    x &= 1;
    cout << "Here is bitwise AND operator: " << x << endl;//perform bitwise AND operation

    y <<= 2;
    cout << "Here is compound assigment operator: " << y  << endl;//perform left shift operation

}
