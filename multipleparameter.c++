#include<iostream>
using namespace std;

template <class first,class second>
float Max(first a,second b){
    return (a>b?a:b);
}

int main(){
    float x = 3.14;
    float y = 5.14;
    cout<<Max(x,y)<<endl;
    return 0;
}