#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    //creating a constructor
    //constructor is a special member function with the same name as of class use to initialize the function of the class.
    //it is automatically invoked whenever the object is created
    
    Complex(void);//constructor declaration
    void printNumber()
    {
        cout<< "your number is " << a << " + " << b << "i" << endl;
        
    }
};

Complex ::Complex(void){ // --->this is default constructor
    a = 10;
    b = 20;
}
int main(){
    Complex c;
    c.printNumber();
    


    return 0;
}
// Properties of constructors
1 I 