#include<iostream>
using namespace std;

class shape {
    public:
    void setValues(int a,int b){
        height = a;
        width  = b;
    }
    // virtual int area(){
    //     return 0;
    // }  virtual member function
    virtual int area()=0;//pure virtual function
    protected:
    int height;
    int width;
};

class rectangle :public shape{
    public:
    int area(){
        return (height * width);
    }
};

class triangel :public shape{
    public:
    int area(){
        return (height * width / 2);
    }
};

int main(){
    rectangle rect;
    triangel tri;
    // shape poly; for virtual member function
    shape *poly1=&rect;
    shape *poly2=&tri;
    // shape *poly3=&poly; for virtual member function
    poly1->setValues(15,10);
    poly2->setValues(15,10);
    // poly3->setValues(15,10); for virtual member function
    cout<<rect.area()<<endl;
    cout<<tri.area()<<endl;
    // cout<<poly.area()<<endl; for virtual member function
    
    return 0;

}