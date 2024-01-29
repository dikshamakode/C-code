#include<iostream>
using namespace std;
int main(){
    class c1{
        int val;
        public:
            void intdata(int a){
                val =a;
        }

        void display(void){
            cout<< val << endl;
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


    return 0;
}