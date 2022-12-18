#include<iostream>
using namespace std;

class MyprivateClass{
    friend class MyfriendClass;
    private:
    int secret = 10;
};

class MyfriendClass{
    public:
    void showSecret(MyprivateClass mp){
        mp.secret++;
        cout<<mp.secret<<endl;
    }
};

int main(){
    MyprivateClass Myprivate;
    MyfriendClass Myfriend;
    Myfriend.showSecret(Myprivate);
    return 0;
}