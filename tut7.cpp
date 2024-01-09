//#include <iostream>
//using namespace std;
//int main()
//{
//    int n,k=0;
//    int c=0;
//    int a[10]={1,2,3,4,5,6,7,8,9,0};
//
//    cout<<"enter the number";
//    cin>>n;
//    int i;
//    for ( i=0;i<10;i++) 
//    {
//        if(n==a[i])
//        {
//            c=1;
//            break;
//        }
//    }
//    cout<<endl;
//    (c==1)?cout<<"element is present and found at the a":cout<<endl;
//    cout<<"position of array="<<i;
//    return 0;
//
//} 
//#include <iostream>
//using namespace std;
//int main() {
//    int arr[10]={1,2,3,1,4,5,6,1,8,10};
//    int i,num,count=0;
//    cout<<"enter number to be searched= ";
//    cin>>num;
//    for(i=0;i<10;i++){
//        if(arr[i]==num){
//            cout<<"The number is present in array";
//            cout<<"Number is at "<<i<<" index.";
//            count=count+1;
//            cout<<"The number is "<<count<<" times in the array.";
//        }
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//float d=34.4F;

//long double e = 34.4L;

//cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;

//cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;

//cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;

//cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
//cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;



//cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

//return 0;
//}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float d,x1,x2;
    
    cout<<"Enter the value of a,b and c to get solution of quadratic equation";
    
    cin>>a>>b>>c;
    
    d=sqrt(b*b-4*a*c);
    
    cout<<"Discriminant is"<<d;
    
    if(d>0){
        
        cout<<"Roots will be real and distinct";
        x1=(-b+d)/2*a;
        x2=(-b-d)/2*a;
        
        cout<<"The roots of quadratic equation is"<<x1<<"and"<<x2;
    }

else if(d=0){
    cout<<"Discriminant is zero roots will be real and equal";
        cout<<"The roots of quadratic equation is"<<x1<<"and"<<x2;
        
}

else if (d<0){
    cout<<"Roots of quadratic equation are imaginary";
        cout<<"The roots of quadratic equation are"<<x1<<"and"<<x2;
}
    return 0;
}
//#include<iostream>
//using namespace std;
//int main()
//int main()
//{
//double d,la1,la2,lo1,lo2,er,r;
//    cout << "\n\n Print the the distance between two points on the surface of earth:\n";
//	cout << "-----------------------------------------------------------------------\n";
//	cout << " Input the latitude of coordinate 1: ";
//	cin>> la1;
//	cout << " Input the longitude of coordinate 1: ";
//	cin>> lo1;
//	cout << " Input the latitude of coordinate 2: ";
//	cin>> la2;
//	cout << " Input the longitude of coordinate 2: ";
//	cin>> lo2;	
//	r=0.01745327; //Pi/180=3.14159/180
//	la1=la1*r;
//	la2=la2*r;
//	lo1=lo1*r;
//	lo2=lo2*r;
//	er=6371.01; //Kilometers
//	d=er * acos((sin(la1)*sin(la2)) + (cos(la1)*cos(la2)*cos(lo1 - lo2)));
//	cout<<" The distance between those points is: "<<d<<"\n";
//}


