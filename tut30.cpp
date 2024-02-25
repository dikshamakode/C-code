#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int , int);//constructor declaration
    void printNumber()
    {
        cout<< "your number is " << a << " + " << b << "i" << endl;
        
    }
};
Complex ::Complex(int x,int y){ // ---> This is parameterized construc
    a = x;
    b = y;
    //cout<<"helloworld";
}

int main(){
    //implicit call
    Complex a(4 ,6);


    //explicit call
    Complex b = Complex(5, 7);
    
    a.printNumber();
    b.printNumber();
    return 0;

}