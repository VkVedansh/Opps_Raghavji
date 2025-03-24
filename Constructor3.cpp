#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double l, double w) : length(l),width(w){}
    //!Constructer called and l and w is passed to private attributes 
    double CalculateArea(){
        return length*width;
    }
};
int main(){
    Rectangle myRecatangle(5,3);//* object called 
    cout<<"area ="<<myRecatangle.CalculateArea()<<endl;
    return 0;

}

