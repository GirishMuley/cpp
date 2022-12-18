#include<iostream>
using namespace std;

template <class datatype>
datatype Sum(datatype a,datatype b){
    return a+b;
}

int main(){
    float x = 3.14;
    float y = 5.14;
    cout<<Sum(x,y)<<endl;
    return 0;
}