#include <iostream>
#include <cmath>
using namespace std;



double taylorSeries(int x, int n) {
    static double p=1, f=1;
    double r=0;
    if(n==0)
        return 1;
    else{
        r=taylorSeries(x,n-1);
        p=p*x;
        f=f*n;
        return r + p/f;
    }

}

int main() {
    double x;
    int n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The value of the Taylor series is: " << taylorSeries(x, n) << endl;
    return 0;
}