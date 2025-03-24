#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int model;

};
int main(){
    car carobj1;
    carobj1.brand = "bmw";
    carobj1.model = 18;
    cout<<carobj1.brand<<endl;
    cout<<carobj1.model<<endl;
}