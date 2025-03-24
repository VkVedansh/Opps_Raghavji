#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int year;
    int seats;
    string colours;
};
void print (car c){
    cout << "Brand: " << c.brand << endl;
    cout << "Year: " << c.year << endl;
    cout << "Seats: " << c.seats << endl;
    cout << "Colours: " << c.colours << endl;
}
void change(car c){ //TODO:if we add (car& c )then it will became pass by references
    c.brand = "Ford";
    c.year = 2021;
    c.seats = 5;
    c.colours = "Blue";
}
int main(){
    car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;
    myCar.seats = 5;
    myCar.colours = "Red";

    car myCar2;
    myCar2.brand = "Toyota";
    myCar2.year = 2025;
    myCar2.seats = 5;
    myCar2.colours = "black";

    print(myCar);
    change(myCar); //pass by value
    cout << "\nAfter changing values in myCar object:\n";
    print(myCar);
    print(myCar2);
    
    // cout << "Brand: " << myCar.brand << endl;
    // cout << "Year: " << myCar.year << endl;
    // cout << "Seats: " << myCar.seats << endl;
    // cout << "Colours: " << myCar.colours << endl;
}