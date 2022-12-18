#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file_;
    file_.open("mytext.txt");
    if(file_.is_open()){
    file_<<"this is my first text file 1"<<endl;
    file_<<"this is my first text file 2"<<endl;
    file_<<"this is my first text file 3"<<endl;
    file_<<"this is my first text file 4"<<endl;
    file_<<"this is my first text file 5"<<endl;
    }
    file_.close();
    return 0;
}