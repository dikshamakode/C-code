#include<iostream>
using namespace std;
Class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }

};
class Y{
    int data;
    public:
        void setValue(int value){
            num = value;
        }
};

void add(X o1, Y o2){
    cout<<"Summing dates of X nd Y object gives me"<< o1.data + o2.data;
}
int main(){

    return 0;
}
//3.35