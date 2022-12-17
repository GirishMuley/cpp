#include<iostream>
using namespace std;

class Book{
    public:
    int id = 101;
    void printBook(){
        cout<<"the book id = "<<id<<endl;
    }
};

int main(){
   Book book;
   book.printBook();
   cout<<book.id<<endl;
   return 0;
}