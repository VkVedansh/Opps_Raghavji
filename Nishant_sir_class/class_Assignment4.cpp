#include<iostream>
using namespace std;

template <typename T>
class Shape {
protected:
    T dimension1;

public:
    Shape(T dim1) : dimension1(dim1) {}
    
    virtual T area() = 0;
};

template <typename T>
class Rectangle : public Shape<T> {
protected:
    T dimension2;

public:
    Rectangle(T dim1, T dim2) : Shape<T>(dim1), dimension2(dim2) {}
    
    T area() override {
        return this->dimension1 * dimension2;
    }
};
template <typename T>
class Circle : public Shape<T> {
public:
    Circle(T radius) : Shape<T>(radius) {}
    
    T area() override {
        return 3.14159 * this->dimension1 * this->dimension1;
    }
};
int main() {
    Rectangle<double> rect(5.5, 4.0);
    Circle<double> circle(3.0);    
    cout << "Rectangle Area: " << rect.area() << endl;
    cout<< "circle Area :"<<circle.area()<<endl;  
    return 0;
}
