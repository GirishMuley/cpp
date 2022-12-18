#include<iostream>
using namespace std;

template<class datatype>
class charfinder{
    public:
    charfinder(datatype a){
        cout<<a<<" is a not valid char"<<endl;
    }
};

template<>
class charfinder<char>{
    public:
    charfinder(char a){
        cout<<a<<" is a valid char"<<endl;
    }
};

int main(){
    charfinder<char> cha1('A');
    charfinder<int>  cha2(10);
    charfinder<float> cha3(5.14);
    return 0;
}