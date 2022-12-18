#include<iostream>
using namespace std;

class Vector{
    public:
    int x,y;
    Vector(){};
    Vector(int a,int b)
    {
        x= a;
        y= b;
    }
    Vector operator+(const Vector&);
};
Vector Vector::operator+(const Vector& parameter){
    Vector temp;
    temp.x=x+ parameter.x;
    temp.y=y+ parameter.y;
    return temp;
}

int main(){
    Vector vet1(4,2);
    Vector vet2(2,2);
    Vector result = vet1+vet2;

    cout<<"the result is ("<<result.x<<","<<result.y<<")"<<endl;
    return 0;
}