#include<iostream>
#include<string>
using namespace std;

class Book{
    public:
    Book(string x){
        setName(x);
    }
    void setName(string x){
        name=x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};

int main(){
    Book book("c++ tutorials");
    cout<<book.getName()<<endl;

    Book book2("java tutorials");
    cout<<book2.getName()<<endl;
    return 0;
}