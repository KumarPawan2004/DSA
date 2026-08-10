#include<iostream>
#include<stdio.h>

using namespace std;

int add_2_no(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << add_2_no(a, b) << endl;
    return 0;
}