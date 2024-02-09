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
    a = 0;
    b = 0;
    cout<<"helloworld";
}
int main(){
    Complex c;
    c.printNumber();
    


    return 0;
}
// Characterstics of constructors
//1 It  should be declare in the public section of the class 
//2 they are automatically invoke wherever the object is created 
//3 they cant return values and do not have return type.
//4 it can have default argument 
//5 we cant refer to the address 
