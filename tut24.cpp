#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is" << id << " and this is employee number" << count << endl;
    }
    static void getCount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};
// count is the static data member of class Employee
int Employee::count; // default value
int main()
{//ni chal raha 
    Employee harry, rohan, lavish;
    // harry.id = 1;
    // harry.count = 1; we cannat do this1 as id and count are private
    harry.setData();
    harry.getData();
    Employee::getCount();
    
    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount();

    return 0;
}