// CPlusChallanges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
    const int minuteInHour = 60;//const keyword make a variable not changiable 
    const int secondsInMinute = 60;

    cout << "Enter amount of hours and program will calculate amount of minutues and seconds!\n" << endl;

    int amountofHours;

    cin >> amountofHours;

    cout << "In " << amountofHours << " hours will be: " << minuteInHour * amountofHours << " minutes and: " << amountofHours * minuteInHour * secondsInMinute << " seconds" << endl;


}
