#include<iostream>
using namespace std;

int multiplication(int x=10,int y=50);

int main(){
    
    
    int ans = multiplication();

    cout<<"the multipication is = "<<ans<<endl;
    
    return 0;

}


int multiplication(int x,int y){
    int result;
    result = x * y;
    return result;
}
