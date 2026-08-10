#include<iostream>
#include<stdio.h>

using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Point *p5;


    cout << "Size of int pointer: " << sizeof(p1) << endl;
    cout << "Size of char pointer: " << sizeof(p2) << endl;
    cout << "Size of float pointer: " << sizeof(p3) << endl;
    cout << "Size of double pointer: " << sizeof(p4) << endl;
    cout << "Size of struct Point pointer: " << sizeof(p5) << endl;


return 0;
}