#include<iostream>
using namespace std;

int multiplication(int x,int y){
    int result;
    result = x * y;
    return result;
}

int main(){
    
    int a,b;
    cout<<"Enter two values for multiplication"<<endl;
    cin>>a>>b;

    int ans = multiplication(a,b);

    cout<<"the multipication is = "<<ans<<endl;
    
    return 0;

}