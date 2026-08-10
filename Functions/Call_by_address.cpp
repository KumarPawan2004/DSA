//swapping of two numbers using call by address
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: " << x << " " << y << endl;
    swap(&x, &y);
    cout << "After swapping: " << x << " " << y << endl;
    return 0;
}
//Call by address: In this method, the address of the actual parameters is passed to the formal parameters. Changes made to the formal parameters affect the actual parameters.