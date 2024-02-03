#include<iostream>
using namespace std;
class c2;
    class c1{
        int val1;
        public:
            void intdata(int a){
                val1 =a;
        }

        void display(void){
            cout<< val1 << endl;
        }

    };
class c2{
        int val2;
        public:
            void intdata(int a){
                val2 =a;
        }

        void display(void){
            cout<< val2 << endl;
        }

};
void exchange(c1 & x, c2& y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(34);
    exchange(oc1, oc2);
    cout<<" the value of c1 after exchangingbecome: "<<oc1.display();
    cout<<" the value of c2 after exchangingbecome: "<<oc2.display();
    return 0;
}