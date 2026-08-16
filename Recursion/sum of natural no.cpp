#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n = 5;
    int result = sumOfNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}