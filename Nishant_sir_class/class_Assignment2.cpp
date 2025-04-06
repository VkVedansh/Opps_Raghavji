#include<iostream>
using namespace std;
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


int main(){
    Employe employe1(1,1500);
    Employe employe2(2,2000);

    employe1.DisplayEmploye();
    employe2.DisplayEmploye();

}