#include<iostream>
using namespace std;
double e(int x, int n) {
    static double s;
    if(n==0){
        return s;
    }    
    s=1+x*s/n;
    return e(x,n-1);
}
int main() {
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The value of e^" << x << " is: " << e(x, n) <<endl;
    return 0;
}