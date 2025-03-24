#include<iostream>
#include<stack>
using namespace std;
class Person{
    private:
    string name;
    int age;

    public:
    Person(){   //!default constructor
        name = "unknown";
        age = 0;
    }
    Person(string s,int a){    //!paramaterised constructor
        name = s;
        age = a;
    }
};
int main(){
    Person person1;//object
    cout<<person1.name<<endl;
    cout<<person1.age<<endl;

    Person person2("vedansh", 19);
    cout<<person2.name<<endl;
    cout<<person2.age<<endl;

    return 0;
}