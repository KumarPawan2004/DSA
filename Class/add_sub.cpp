#include<iostream>
using namespace std;

class arithmetic
{
private:
    int a, b;

public:
    arithmetic(int x, int y)
    {
       this->a = x;
        this->b = y;
    }

    int Addition()
    {
        return a + b;
    }

    int Subtraction()
    {
        return a - b;
    }
};

int main()
{
    arithmetic obj1(10, 5), obj2(15, 10);
    cout << "Addition: " << obj1.Addition() << endl;
    cout << "Subtraction: " << obj1.Subtraction() << endl;
    cout << "Addition: " << obj2.Addition() << endl;
    cout << "Subtraction: " << obj2.Subtraction() << endl;
    return 0;
}