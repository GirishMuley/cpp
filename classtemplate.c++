#include<iostream>
using namespace std;

template<class datatype>
class Maths{
    datatype a,b;
    public:
    Maths(datatype x,datatype y){
        a=x;
        b=y;
    }
    datatype maxValues();
};
template<class datatype>
datatype Maths<datatype>::maxValues(){
    return (a>b?a:b);
}

int main(){
    Maths<int> max(50,10);
    cout<<max.maxValues()<<endl;
    Maths<double> mt(5.151515,6.1549464);
    cout<<mt.maxValues()<<endl;
    return 0;
}