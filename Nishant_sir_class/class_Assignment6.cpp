#include<iostream>
using namespace std;

class Box{
    private:
    int length;
    int Breadth;

    public:
    Box(int l,int b){
        length = l;
        Breadth = b;
    }

    friend class Display;
};

class Display{
    public: void showDimensions(Box objb){
        cout<<"Length = "<<objb.length<<endl;
        cout<<"Breadth = "<<objb.Breadth<<endl;
    }
};

int main(){
    Box boxobj(4,3);
    Display displayobj;

    displayobj.showDimensions(boxobj);

    return 0;
}