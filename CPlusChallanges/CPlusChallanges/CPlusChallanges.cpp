// CPlusChallanges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>


using namespace std;

void SayHello(){ //void function
    
    cout<<"Hello world!"<<endl;
}

void SquareArea(double length, double width){//function with muptiple parameters

    double area = length * width;
    cout<<"Area of this square is equal to "<<area<<endl;
}

int SumOfTwoNumbers (int number1, int number2){//function with return type
    int result = number1 + number2;
    return result;
}

double SumOfTwoNumbers(double number1, double number2){//overloading of the function
    double result = number1 + number2;
    return result;
}

void dublicate(int& x){//passing a function with reference
    
    x = x * x;
}

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

    /*cout << "Here is assigment operator: " << (x = 10) << x << endl;//print 10 no matter what value was assigned initially
    cout << "Here is addition assignment: " << (x += y) << endl;//add value of y to x

    x &= 1;
    cout << "Here is bitwise AND operator: " << x << endl;//perform bitwise AND operation

    y <<= 2;
    cout << "Here is compound assigment operator: " << y  << endl;//perform left shift operation*/

        //logical operators
    
   /* int x,y;
    cout<<"Please type 2 any whole numbers"<<endl;
    cin >> x >> y;
    
    if (x > 0 && y > 0) { //to use logical AND operator
        cout <<"Both your numbers are positive!"<< endl;
    }
    
    
    else if(x==0 || y ==0){ //to use logical OR operator
        cout<<"Some of your numbers equal to zero..."<<endl;
    }
    
    else if(!(x > 0 && y > 0)){ //to use logical not operator
        cout<<"Both your numbers are negative..."<<endl;
    }*/
    
    //getline function
    /*
    string FullName;
    cout<< "Type your full name"<<endl;
    getline(cin, FullName);//to get a full line input, not one word
    cout<<"Your full name is: " <<FullName;
    */
    
    //math functions, need #include <cmath>
    /*double x,y;
    cout<<"Type two  numbers..."<<endl;
    cin>>x>>y;
    //cout<<"Biggest number is: "<< max(x,y)<<endl; //to find biggest from two numbers
    
    cout<<"Square root of 1st number is: "<< sqrt (x)<<endl;//to calculate square root of the number
    cout<<"Rounded 2nd number will be: "<< round(y) <<endl;//use round function to round 2nd number
    cout<<"1st number in 2nd number power will be: "<<pow(x,y)<<endl;//to power 1st number in 2nd number power */

        /*//if, else if else statements
    if (x > y)
    {
        cout<<"1st number is bigger than 2nd number"<<endl;
    }
    else if (x < y) 
    {
        cout<<"2nd number is bigger than 1st number"<<endl;
    }
    
    else 
    {
        cout<<"Numbers are equal"<<endl;
    }
    */
    
    /*//swith statement
    
    switch(x){
        case 1:
        cout<<"Your number is 1"<<endl;
        break;
        
        case 2:
        cout<<"Your number is 2"<<endl;
        break;
        
        default:
        cout<<"Your number is not 1 and 2"<<endl;
    }
    */
    
    /*//ternary operator
    string numberText = (x > 10)? "Number is bigger than 10" : "Number is less or equal than 10";
    cout<<numberText;*/
    
    /*//while loop
    while(x >y){
        cout<<x<<endl;
        --x;
    }*/
    
    /*//do while loop
    do{
        cout<<x<<"\n";
        ++x;
    }
    
    while(x<=10);*/

}
