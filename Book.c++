#include"Book.h"
#include<iostream>
#include<string>
using namespace std;
Book::Book(){

}
void Book::setBookId(int bookId_){
   
    bookId=bookId_;
}
int Book::getBookId(){
    return bookId;
}