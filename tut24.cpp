#include<iostream>
using namespace std;

class Employee{
    int count;
    int id;
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<"The id of this employee is" << id;
        }


};

int main(){
    Employee harry,rohan,lavish;
    //harry.id = 1;
    //harry.count = 1; we cannat do this as id and count are private
    harry.setData(); 
    harry.getData();

    rohan.setData(); 
    rohan.getData();

    lavish.setData(); 
    lavish.getData();   

    return 0;
}