#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;

    public:
    void setname(string n){
        name= n;//!Dont use return in setter function
    }
    void setage(int a){
         age = a;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
};
int main(){
    Student student;
    student.setname("Vedansh kumar");
    student.setage(19);

    cout<<student.getname()<<endl;
    cout<<student.getage()<<endl;
}