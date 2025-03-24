#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    // constructor
    Rectangle(double l, double w) : length(l), width(w) {}
    double calcluateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle myrectangle(5, 3);
    cout << myrectangle.calcluateArea() << endl;
    return 0;
}