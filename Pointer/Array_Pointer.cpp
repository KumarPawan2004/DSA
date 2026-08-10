#include <iostream>
using namespace std;

int main()
{

    //     // array of 5 integers created in stack memory
    //     int a[5] = {10, 20, 30, 40, 50};
    // // pointer to an integer
    //     int *p;
    //     p = a;

    //     // for each loop to print the elements of the array
    //     for (int u : a)
    //     {
    //         cout << u << endl;
    //     }

    //     // for loop to print the elements of the array using pointer
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << p[i] << endl;
    //     }

    int *p;
    // c style memory allocation
    // p=(int *)malloc(5*sizeof(int));

    // c++ style memory allocation
    p = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    // free the memory allocated in heap c style
    // free(p);
    // delete the memory allocated in heap c++ style
    delete[] p;

    return 0;
}