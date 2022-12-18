#include<iostream>
#include<string>
using namespace std;

class shape{
    public:
    void setValues(int a,int b){
        height = a;
        width = b;
    }
    protected:
    int height;
    int width;
};

class description {
    public:
    void print(string description_){
        cout<<"we are using "<<description_<<"class"<<endl;
    }
};

class rectangle :public shape ,public description{
    public:
    int area(){
        return (height * width);
    }
};

class triangle :public shape,public description{
    public:
    int area(){
        return (height * width / 2);
    }
};

int main(){
    rectangle rect;
    triangle tri;

    rect.setValues(15,10);
    
    cout<<"the area of rectangle is "<<rect.area()<<endl;
    rect.print("rectangle");

    tri.setValues(15,10);

    cout<<"the area of triangle is "<<tri.area()<<endl;
    tri.print("triangle");

    return 0;
}