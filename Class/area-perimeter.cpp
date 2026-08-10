#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

int area_rec()
{
    return length*breadth;
}

int perimeter_rec()
{
    return 2 * (length + breadth);
}

void initialise_rec(int l, int b)
{
    length = l;
    breadth = b;
}
};
int main()
{
    Rectangle R1;

    cout << "Enter length of rectangle: ";
    cin >> R1.length;
    cout << "Enter breadth of rectangle: ";
    cin >> R1.breadth;

    cout << "Area of rectangle: " << R1.area_rec() << endl;
    cout << "Perimeter of rectangle: " << R1.perimeter_rec() << endl;

    int l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    R1.initialise_rec(l, b);
    cout << "Area of rectangle after initialization: " << R1.area_rec() << endl;
    cout << "Perimeter of rectangle after initialization: " << R1.perimeter_rec() << endl;

    return 0;
}
