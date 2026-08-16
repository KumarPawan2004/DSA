#include<iostream>
using namespace std;
void function(int x )
{
    if(x>0)
    {
        cout << x << endl;
        function(x-1);
    }
}


int main(){
    int x=3;

    function(x);
    return 0;
}