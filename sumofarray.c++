#include<iostream>
using namespace std;

int main(){
    int Myarray[5] = {10,20,30,40,50};
    int sum = 0;
    for(int i = 0;i<5;i++){
        sum += Myarray[i];
    }
    cout<<"the sum is = "<<sum<<endl;
    return 0;
}