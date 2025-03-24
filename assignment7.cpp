#include<iostream>
using namespace std;
class mathoperation{
    public:
    int multiply(int a,int b){
        return a*b;
    }
    int multiply(int a,int b,int c){
        return a*b*c;
    } 
};
int main(){
    mathoperation matobj;
    cout<<matobj.multiply(1,2)<<endl;
    cout<<matobj.multiply(1,3,2)<<endl;

}