#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
using namespace std;

class Book{
    public:
    Book();
    int bookId;
    void setBookId(int bookId_);
    int getBookId();
};

#endif