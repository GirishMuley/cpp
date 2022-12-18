#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//following code for read file

// int main(){
//     string line_;
//     ifstream file_("mytext.txt");
//     if(file_.is_open()){
//         while(getline(file_,line_)){
//             cout<<line_<<endl;
//         }
//         file_.close();
//     }
//     else
//     {
//         cout<<"file is unable to open"<<endl;
//     }
//     return 0;
// }

//following code for custom datatype

int main(){
    ifstream file_("mytext.txt");
    int id;
    string name;
    int age;
    if(file_.is_open()){
        while(file_ >> id >> name >> age){
            cout<< id << " " << name << " " << age << endl;
        }
        file_.close();
    }
    else
    {
        cout<<"file is unable to open"<<endl;
    }
    return 0;
}