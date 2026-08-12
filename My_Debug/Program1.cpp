#include<iostream>
using namespace std;
int main()
{
    int sum= 0;
    int a[]= {1,2,3,4,5};
    for(auto i: a)
    {
        sum+=i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
