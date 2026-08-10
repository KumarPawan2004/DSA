#include<stdio.h>
#include<iostream>
using namespace std;

int area_rec(int length, int breadth)
{
    return length * breadth;
}

int perimeter_rec(int length, int breadth)
{
    return 2 * (length + breadth);
}

int main()
{
    int length=0 ,breadth=0;

    cout<<"Enter length of rectangle: ";
    cin>>length;

    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;

    int area = area_rec(length, breadth);
    cout << "Area of rectangle: " << area << endl;

    int perimeter = perimeter_rec(length, breadth);
    cout << "Perimeter of rectangle: " << perimeter << endl;

    return 0;
}