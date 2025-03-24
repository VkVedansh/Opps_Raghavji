#include<iostream>
using namespace std;
// declaring classes
class Student{
    public:
    string name;
    int roll_no;
    int age;

};
// initialization classes
int main(){
    Student s1;
    s1.name = "Vedansh";
    s1.roll_no = 123;
    s1.age = 18;
    Student s2;                    //for selecting multiple cursor use alt + select position where you want to make changes
    s2.name = "Raghav";
    s2.roll_no = 123;
    s2.age = 18;          

    Student s3 = s1;              //*Deep copy of the current student object to avoid copying the current student object from another object that already exists in the database

    s3.name = "Pandu";
    Student s4(s2);               //!copy constructor == deep copy constructor

    cout<< "Student 1: " << s1.name << ", Roll No: " << s1.roll_no << ", Age: " << s1.age << endl;
    cout<< "Student 2: " << s2.name << ", Roll No: " << s2.roll_no << ", Age: " << s2.age << endl;
    cout<< "Student 3: " << s3.name << ", Roll No: " << s3.roll_no << ", Age: " << s3.age << endl;
    
}