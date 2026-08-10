#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;

     int b = 25;
    r = b;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of r: " << r << endl;
    return 0;
}
