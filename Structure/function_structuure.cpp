#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area_rec(Rectangle R)
{
    return R.length * R.breadth;
}

int perimeter_rec(Rectangle R)
{
    return 2 * (R.length + R.breadth);
}

void initialise_rec(Rectangle &R, int l, int b)
{
    R.length = l;
    R.breadth = b;
}



int main()
{
    Rectangle R1;

   

    cout<<"Enter length of rectangle: ";
    cin>>R1.length;
    cout<<"Enter breadth of rectangle: ";
    cin>>R1.breadth;


    cout << "Area of rectangle: " << area_rec(R1) << endl;
    cout << "Perimeter of rectangle: " << perimeter_rec(R1) << endl;


 int l, b;
 cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;

    initialise_rec(R1, l, b);
    cout << "Area of rectangle after initialization: " << area_rec(R1) << endl;
    cout << "Perimeter of rectangle after initialization: " << perimeter_rec(R1) << endl;

   
    return 0;
}
