#include<iostream>
#include<string>
using namespace std;

class Book{
    public:
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
    Book book;
    book.setName("c++ tutorials");
    cout<<book.getName()<<endl;
    return 0;
}