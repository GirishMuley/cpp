#include<iostream>
using namespace std;

void sum(int x,int y){
    cout<<"the sum of integer nmber is= "<<x+y<<endl;
}

void sum(float x,float y){
    cout<<"the sum of flaot nmber is= "<<x+y<<endl;
}


int main(){
    int a = 10,b=20;
    sum(a,b);
    float c = 3.12,d = 5.12;
    sum(c,d);
    return 0;
}