#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(20);
    my_vector.push_back(30);
    my_vector.push_back(40);

    cout<<"vector size is = "<<my_vector.size()<<endl;
    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;
    cout<<"is vector empty = "<<my_vector.empty()<<endl;

    cout<<"Deleting vector first value uisng begin() function"<<endl;

    my_vector.erase(my_vector.begin());
    cout<<"vector size is = "<<my_vector.size()<<endl;
    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;
    cout<<"is vector empty = "<<my_vector.empty()<<endl;

    cout<<"Deleting vector value at particular position"<<endl;

    my_vector.erase(my_vector.begin() + 1);
    cout<<"vector size is = "<<my_vector.size()<<endl;
    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;
    cout<<"is vector empty = "<<my_vector.empty()<<endl;
    
    cout<<"Deleting value by entering the value"<<endl;
    my_vector.erase(remove(my_vector.begin(),my_vector.end(),40),my_vector.end());
    cout<<"vector size is = "<<my_vector.size()<<endl;
    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;
    cout<<"is vector empty = "<<my_vector.empty()<<endl;

    cout<<"Deletin all the values from vector"<<endl;
    my_vector.clear();
    cout<<"vector size is = "<<my_vector.size()<<endl;
    for(int i = 0;i<my_vector.size();i++)
    cout<<"vector"<<i<<" "<<my_vector.at(i)<<endl;
    cout<<"is vector empty = "<<my_vector.empty()<<endl;
    return 0;

}