#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;

    Person(int age,string name){
        this->age = age;
        this->name = name;
    }
    void DisplayPerson(){
        cout<<"Your Name is : "<<name<<endl;
        cout<<"Your Age is : "<<age<<endl;
    }
};

int main(){
    Person person(20,"Vedansh");
    person.DisplayPerson();
}