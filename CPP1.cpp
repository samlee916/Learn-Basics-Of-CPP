#include <iostream>

using namespace std;

int main () {

    //simple print statements
    cout << "Hello World" << endl;

    //swapping variables
    int a = 5, b = 10, temp;
    cout << "Before Swapping." << endl;
    cout << "a = " << a << ", b =  " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping." << endl;
    cout << "a = " << a << ", b =  " << b << endl;


    return 0;

}
