//structure is use to define your own data type
#include<iostream>
#include<cstring>
using namespace std;

struct Books{
    int id;
    char book_name[50];
    char book_author[50];
};

int main(){
    struct Books book;

    book.id = 1;
    strcpy(book.book_name,"c++ tutorials");
    strcpy(book.book_author,"Girish muley");

    cout<<"Book id     = "<<book.id<<endl;
    cout<<"Book name   = "<<book.book_name<<endl;
    cout<<"Book author = "<<book.book_author<<endl;

    return 0;
}