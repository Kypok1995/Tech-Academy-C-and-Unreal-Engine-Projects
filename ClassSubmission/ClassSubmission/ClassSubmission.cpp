// ClassSubmission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string color;

    double getArea();
};

class Rectangle : public Shape// inheritance of shape class
{
public:
    double height;
    double width;
    
    Rectangle(double x, double y, string z) {//constructor 
        height = x;
        width = y;
        color = z;
    }

    double getArea() {// polymorphism: interpretation of getArea method for rectangle
        double result = height * width;
        cout << "The area of this rectangle is: " << result << endl;
        return result;
    }
};

class Triangle : public Shape {//inheritance of shape class
public:
    double base;
    double height;

    Triangle(double x, double y, string z) {//constructor
        height = x;
        base = y;
        color = z;
    }

    double getArea() { // polymorphism: interpretation of getArea method for triangle
        double result = (base * height) / 2;
        cout << "The area of this triangle is: " << result << endl;
        return result;
    }
};

class Circle : public Shape {//inheritance of shape class
public: 
    double radius;

    Circle(double x, string z) {//constructor
        radius = x;
        color = z;
    }

    double getArea() {// polymorphism: interpretation of getArea method for circle
        double Pi = 3.1415926535;
        double result = (radius * radius) * Pi;
        cout << "The area of thus circle is: " << result << endl;
        return result;
    }
};

int main()
{
    Rectangle FigureOne(10, 25, "Brown"); //instance of rectangle class
    Triangle  FigureTwo(3, 9, "White");// instance of triangle 
    Circle    FigureThree(3, "Black");

    FigureOne.getArea();
    FigureTwo.getArea();
    FigureThree.getArea();
    
}

