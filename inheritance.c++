#include<iostream>
using namespace std;

class shape{
    public:
    void setValues(int a, int b){
        width = a;
        height = b;
    }
    protected:
    int width;
    int height;
};

class rectangle : public shape{
    public:
    int area(){
        return (width * height);
    }
};
class triangle : public shape{
    public:
    int area(){
        return(width * height/2);
    }
};

int main(){
    rectangle rect;
    triangle tri;
    rect.setValues(15,10);
    tri.setValues(15,10);
    cout<<"the area of rectangle = "<<rect.area()<<endl;
    cout<<"the area of triangle  = "<<tri.area()<<endl;
    return 0;
}