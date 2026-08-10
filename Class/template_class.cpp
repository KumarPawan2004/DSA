#include <iostream>
using namespace std;
template<class T>
class arithmetic
{
private:
    T a, b;

public:
    arithmetic(T x, T y);
    T Addition();
    T Subtraction();
};
template<class T>
arithmetic<T>::arithmetic(T x, T y)
{
    this->a = x;
    this->b = y;
}

template<class T>
T arithmetic<T>::Addition()
{
    return a + b;
}

template<class T>
T arithmetic<T>::Subtraction()
{
    return a - b;
}

int main()
{
    arithmetic<int> obj1(10, 5), obj2(15, 10);
    cout << "Addition: " << obj1.Addition() << endl;
    cout << "Subtraction: " << obj1.Subtraction() << endl;
    cout << "Addition: " << obj2.Addition() << endl;
    cout << "Subtraction: " << obj2.Subtraction() << endl;
    return 0;
}