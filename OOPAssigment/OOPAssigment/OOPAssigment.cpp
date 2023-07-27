// OOPAssigment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string breed;
    string color;
    double weight;
    double height;

    void Shake() {
        cout << "Give me a paw, good boy" << endl;
    }

    void Sit() {
        cout << "Take a sit!" << endl;
    }

    void LayDown() {
        cout << "Lay down, good boy!" << endl;
    }
    Dog(string x, string y, double z, double h) {
        breed = x;
        color = y;
        weight = z;
        height = h;
    }

    void PrintOut() {
        cout << "The dog's breed is: " << breed << " , color is: " << color << " , weight is: " << weight << " pounds and height is: " << height << " feet" << endl;
    }
};

int main()
{
    Dog GoodBoy("German Shepard", "Black", 40, 2);
    GoodBoy.PrintOut();
    GoodBoy.Sit();
    GoodBoy.Shake();
    GoodBoy.LayDown();


}


