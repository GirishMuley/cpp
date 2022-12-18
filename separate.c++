#include<iostream>
#include<string>
using namespace std;
#include"Book.h"

int main(){
    Book book;
    book.setBookId(100);
    cout<<book.getBookId()<<endl;
    return 0;
}