/*int x = 4;
cout<<&x<<endl;    adress of x
int* p = &x;       adress of stored in x store in p
cout<<p<<endl;      it gives adress of p
cout<<*p<<endl;     value at p
*p = 100;
cout<<p<<endl;      output is 100//todo: dereferenceoperator and static alloccated

//?   int* ptr = new int(18);  // prints 18
//?   cout<<*ptr<<endl;

*/

#include<iostream>
using namespace std;

class Cricket{
    public:
    string name;
    int age;

    Cricket(string name, int age){
        this->name = name;    //* use this keyword when u have to give same name as class and object
        this->age = age;
    }

    
};



int main(){
    Cricket player1("Rohit Sharma",28);
    Cricket player2("Virat Kohli",28);

    Cricket*p1 = &player1;
    Cricket*p2 = &player2;
    cout<<(*p1).name<<endl;
    cout<<(*p2).name<<endl;
    (*p1).age = 40;
    p2->age = 41;

    cout<<"player 1 age is change by pointer : "<<(*p1).age<<endl;
    cout<<"player 2 age is change by this : "<<(*p2).age<<endl;
    //(*p1).age == p1.age same thing
}