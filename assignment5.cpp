#include<iostream>
using namespace std;
class book{
    private:
    string title;
    string author;

    //constructor
    public:
    book():title(" "),author(" "){}
    
    //copy constructor
    book(const book &b){
        title = b.title;
        author = b.author;
        cout<<"copy constructor called "<<endl;

    }
};
int main (){
    book book1;
    book book2 = book1;
    return 0;
}