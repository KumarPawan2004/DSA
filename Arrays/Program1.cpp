#include <iostream>

using namespace std;

int main()
{
    // int A[5];
    // A[0] = 12;
    // A[1] = 24;
    // A[2] = 36;
    // A[3] = 48;
    // A[4] = 60;

    // cout << sizeof(A) << endl;
    // cout << A[1] << endl;

    // printf("The value of A[2] is: %d\n", A[2]);

   // int B[5] = {12, 24};

    

    // cout << sizeof(B) << endl;
    // cout << B[3] << endl;


    // For loop to print the values of the array B

    // for (int i = 0; i < 11; i++)
    // {
    //     cout << B[i] << endl;
    // }

    // For Each loop to print the values of the array B

    // for (int x :B)
    // {
    //     cout << x << endl;
    // }


    // Dynamic  array

    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int C[n]={0,2,3,4,5,};

    for(int i:C)
    {
        cout<<i<<endl;
    }





    return 0;
}
