#include<iostream>
using namespace std;

class shape {
    public:
    void setValues(int a,int b){
        height = a;
        width  = b;
    }
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
    shape *poly1=&rect;
    shape *poly2=&tri;
 
    poly1->setValues(15,10);
    poly2->setValues(15,10);

    cout<<rect.area()<<endl;
    cout<<tri.area()<<endl;

    return 0;

}