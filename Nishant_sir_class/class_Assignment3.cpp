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

class Employe{
    public:
    int EmployeeId;
    double salary;

    Employe(int EmployeeId,double salary){
        this->EmployeeId = EmployeeId;
        this->salary = salary;
    }

    void DisplayEmploye(){
        cout<<"Your Employ ID is :"<<EmployeeId<<endl;
        cout<<"Your Salary is : "<<salary<<endl;
    }

};

class Manager : public Person, public Employe {
    public:
        string department;
        
        Manager(int age, string name, int EmployeeId, double salary, string department) 
            : Person(age, name), Employe(EmployeeId, salary) {
            this->department = department;
        }
        
        void DisplayManager() {
            DisplayPerson();
            DisplayEmploye();
            cout << "Your Department is: " << department << endl;
        }
    };
    
    int main() {
        Manager mgr(30, "Vedansh", 101, 75000.0, "HR");
        mgr.DisplayManager();
        return 0;
    }