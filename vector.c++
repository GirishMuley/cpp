#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(20);
    my_vector.push_back(30);
    my_vector.push_back(40);
    
    cout<<"vector size = "<<my_vector.size()<<endl;

    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector[i]<<endl;

    cout<<"following is print using at() function"<<endl;
    for(int i=0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;

    return 0;
}