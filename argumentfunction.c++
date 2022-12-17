//passing parameters and arguments in function
#include<iostream>
using namespace std;

int sum(int x,int y){
    cout<<"Addtion of two number is = "<<x+y<<endl;
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter two values of addtion."<<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;

}