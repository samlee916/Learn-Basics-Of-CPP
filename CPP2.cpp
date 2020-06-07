#include <iostream>
#include <cmath>

using namespace std;

//a class
class Student {
public:
    int id;
    string name;
};

//classes and functions
int main () {

    Student s;
    s.id = 201;
    s.name = "Rocky Rock";
    cout << s.id << endl;
    cout << s.name << endl;

    //function example
    double number, squareRoot;
    cout << "Enter a number: ";
    cin >> number;
    squareRoot = sqrt(number);
    cout << "Square root of " << number << " = " << squareRoot;

    return 0;

}
