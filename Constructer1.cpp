#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int age;
    Student(){
        //*default constructor--> for running students2.
    }
    //* constructor is used for asssigining all values at a same time

    Student(string s, int r, int g){    // constructor and yaha pe jis order me rhega
        name = s;                   //*paramatarize constructor--> for running studentss1.
        roll_no = r;
        age = g;
    }

};

int main(){
    Student s1("Vedansh", 123,18);     //use of constructor / waisa hi yha pe same order me dena hoga
    // s1.name = "Vedansh";
    // s1.roll_no = 123;                      //TODO:uncomment and change the value changes will be done
    // s1.age = 18;

    // Student s2;             //!for selecting multiple cursor use alt + select position where you want to make changes
    // s2.name = "Raghav";
    // s2.roll_no = 123;
    // s2.age = 18;

    cout<< "Student 1: " << s1.name << ", Roll No: " << s1.roll_no << ", Age: " << s1.age << endl;
//     cout<< "Student 2: " << s2.name << ", Roll No: " << s2.roll_no << ", Age: " << s2.age << endl;
    
}