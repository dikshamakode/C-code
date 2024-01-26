#include<iostream>
using namespace std;
Class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);

};
class Y{
    int data;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"Summing dates of X nd Y object gives me"<< o1.data + o2.num;
}
int main(){
    X a;
    

    return 0;
}
//3.35