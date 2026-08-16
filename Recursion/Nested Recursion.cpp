#include <iostream>
using namespace std;

int nestedRecursion(int n) {
    if (n > 100) 
        return n-10;
    return nestedRecursion(nestedRecursion(n + 11));
}

int main() {
    int result = nestedRecursion(89);
    cout << "Result: " << result << endl;
    return 0;
}