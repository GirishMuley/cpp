#include<iostream>
using namespace std;

class Book{
    public:
    Book(){
        cout<<"we are in construtor"<<endl;
    }
    ~Book(){
        cout<<"we are in destructor"<<endl;
    }
};

int main(){
    Book book;
    cout<<"we are in main"<<endl;
    return 0;
}