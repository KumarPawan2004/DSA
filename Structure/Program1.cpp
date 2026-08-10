#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

// variable of type struct Rectangle
// Global variable
// struct Rectangle R1;

int main()
{
    // Local variable
    struct Rectangle R1 = {10, 5};
    // Size of struct Rectangle
    // cout << " line 21...  Size of R1 is: " << sizeof(R1) << endl;

    // printf(" line 23 ....  Size of R1 is: %d\n", sizeof(R1));

    // Accessing the members of struct Rectangle

    // cout << " line 28 ....  Length of R1 is: " << R1.length << endl;
    // cout << " line 29 ....  Breadth of R1 is: " << R1.breadth << endl;
    // cout << " line 30 ....  Character of R1 is: " << R1.x << endl;

    // Assiign values to the members of struct Rectangle

    R1.length = 20;
    R1.breadth = 10;

    // Accessing the members of struct Rectangle

    cout << " line 28 ....  Length of R1 is: " << R1.length << endl;
    cout << " line 29 ....  Breadth of R1 is: " << R1.breadth << endl;
    cout << " line 30 ....  Character of R1 is: " << R1.x << endl;

    return 0;
}


// What is Paddig in C++?

// Padding is the process of adding extra bytes to a data structure to ensure that its members are aligned in memory according to the architecture's requirements. This can lead to increased memory usage but can also improve performance by ensuring that data is accessed efficiently. In C++, padding can occur in structures and classes, where the compiler may insert unused bytes between members to align them properly.