// create array inide function 
#include <iostream>
using namespace std;

int * fun(int n)
{
    int *A;
    A=new int[n];

    for(int i=0; i<n; i++)
    {
        A[i]=i+1;
    }
    return A;
}
int main()
{
    int *ptr,sz=7;

    ptr=fun(sz);
    for(int i=0; i<sz; i++)
    {
        cout<<ptr[i]<<" ";
    }

    return 0;
}