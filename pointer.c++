#include<iostream>
using namespace std;

int main(){
    int var = 10;
    int *intpt;
    intpt = &var;

    cout<<"print using normal variable "<<var<<endl;
    cout<<"print using pointer variable "<<*intpt<<endl;
    cout<<"memory address of normal variable "<<&var<<endl;
    cout<<"memory address of pointer variable "<<intpt<<endl;

    return 0;
}