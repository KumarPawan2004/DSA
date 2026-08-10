#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int Area()
    {
        return length * breadth;
    }

    int Perimeter()
    {
        return 2 * (length + breadth);
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int setLength(int l)
    {
        length = l;
    }
    int setBreadth(int b)
    {
        breadth = b;
    }
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Rectangle R1(5, 3);
    cout << "Area of rectangle: " << R1.Area() << endl;
    cout << "Perimeter of rectangle: " << R1.Perimeter() << endl;
    return 0;
}