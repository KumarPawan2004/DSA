// Structure as parameter
#include <iostream>
using namespace std;


// Creating a structure named Rectangle
// It contains two integer members: length and breadth
struct Rectangle
{
    int length;
    int breadth;
};


// Passing structure by VALUE
// A copy of the original Rectangle is passed to the function
void fun(Rectangle r)
{
    // Changing r.length changes only the COPY,
    // not the original r1 in main()
    r.length = 20;

    // Calculate and print area using the copy of Rectangle
    cout << "Line 14 Area of rectangle is: "
         << r.length * r.breadth;

    cout << endl;
}


// Passing structure by ADDRESS using a pointer
void fun(Rectangle *r)
{
    // -> is used to access structure members through a pointer
    // This changes the ORIGINAL Rectangle
    r->length = 50;

    // Calculate and print area using the original Rectangle
    cout << "Line 21 Area of rectangle is: "
         << r->length * r->breadth;

    cout << endl;
}


// Function returns a POINTER to a Rectangle structure
struct Rectangle *fun()
{
    // Declare a pointer to Rectangle
    Rectangle *p;

    // Dynamically create a Rectangle object in memory
    // new returns the address of the newly created Rectangle
    p = new Rectangle;

    // Access length using -> because p is a pointer
    p->length = 30;

    // Access breadth using -> because p is a pointer
    p->breadth = 20;

    // Return the address of the dynamically created Rectangle
    return p;
}


int main()
{
    // Create a Rectangle variable
    // length = 10 and breadth = 5
    Rectangle r1 = {10, 5};


    // Calls the first fun()
    // Rectangle is passed BY VALUE
    // A COPY of r1 is sent to the function
    fun(r1);


    // &r1 gives the ADDRESS of r1
    // Calls the second fun()
    // Rectangle is passed BY ADDRESS
    fun(&r1);


    // r1 was changed to length = 50 by the second fun()
    // breadth is still 5
    // Therefore area = 50 * 5 = 250
    cout << "Line 32 Area of rectangle is: "
         << r1.length * r1.breadth;


    // Declare a pointer to a Rectangle
    Rectangle *ptr;


    // Calls the third fun()
    // The function creates a Rectangle dynamically using new
    // and returns its address
    ptr = fun();


    // ptr contains the address of the Rectangle
    // -> is used to access length and breadth through ptr
    cout << "Line 47 Area of rectangle is: "
         << ptr->length * ptr->breadth;


    // Release the dynamically allocated Rectangle
    // because it was created using new
    delete ptr;


    return 0;
}