#include<iostream>
using namespace std;

int main(){
 int arr[3] = {10,20,30};

 cout<<arr[0]<<endl;
 cout<<arr[1]<<endl;
 cout<<arr[2]<<endl;

 int arr2[3];
 arr2[0]=40;
 arr2[1]=50;
 arr2[2]=60;

 cout<<arr2[0]<<endl;
 cout<<arr2[1]<<endl;
 cout<<arr2[2]<<endl;

int Myarray[5];
for(int i = 0;i<=5;i++){
    cout<<"enter value"<<endl;
    cin>>Myarray[i];
}

for(int i=0;i<=5;i++){
    cout<<"values is array is ="<<Myarray[i]<<endl;
}


return 0;
}

