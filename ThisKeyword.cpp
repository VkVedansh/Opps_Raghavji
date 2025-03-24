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
    cout << "Player 1 Name: " << player1.name << endl;
    cout << "Player 1 Age: " << player1.age << endl;
    cout << "Player 2 Name: " << player2.name << endl;
    cout << "Player 2 Age: " << player2.age << endl;
}