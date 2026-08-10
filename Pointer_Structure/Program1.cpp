#include <iostream>
#include <stdio.h>

using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    // Creating a structure variable in C.
    // In C, 'struct' is required while declaring the variable.
    struct Point p1 = {10, 20};

    // Creating a structure variable in C++.
    // In C++, 'struct' is not required while declaring the variable.
    Point p2 = {30, 40};

    // Accessing structure members using the dot (.) operator.
    cout << p2.x << endl;
    cout << p2.y << endl;

    // Creating a pointer to a structure in C++.
    Point *ptr = &p2;

    // Accessing structure members using a structure pointer and -> operator.
    // The -> operator is used in both C and C++.
    cout << ptr->x << endl;
    cout << ptr->y << endl;

    // Dynamically allocating memory for a structure using new in C++.
    Point *ptr1 = new Point;

    // Dynamically allocating memory for a structure using malloc() in C.
    Point *ptr2 = (struct Point *)malloc(sizeof(struct Point));

    // Assigning values to structure members using a structure pointer.
    ptr2->x = 60;
    ptr2->y = 70;

    // Accessing structure members using a structure pointer and -> operator.
    cout << ptr2->x << endl;
    cout << ptr2->y << endl;

    return 0;
}