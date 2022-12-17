#include<iostream>
using namespace std;

int main(){
    char grade;
    cout<<"enter the grade"<<endl;
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Exellent"<<endl;
        break;
        case 'B':
        cout<<"Very Good"<<endl;
        break;
        case 'C':
        cout<<"You passed"<<endl;
        break;
        default:
        cout<<"Invalid entry"<<endl;
        break;
    }
    return 0;
}
