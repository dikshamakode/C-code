// the code is not working 
// the concept behind it was of friend class

#include <iostream>
using namespace std;

// forward  declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(Complex, Complex);
    int sumComcomplex(Complex, Complex);

};

class Complex
{
    int a, b;
    friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumCompComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumCompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main(){
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompcomplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is " << resc << endl;
    return 0;
}