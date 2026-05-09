#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<<num<<endl;

    //printing address of num
    cout<<"address of num " <<&num<<endl;

    int *ptr=&num;//creating a pointer and its store the value

    cout<<"value of pointer " <<*ptr <<endl;
    cout<<"without dereference operator of pointer " <<ptr <<endl;//its print the address of num not print the value

    double d=4.3;
    double*p2=&d;

    cout<<"the value of d is " <<*p2<<endl;
    cout<<"without dereference operator of pointer " <<p2 <<endl;

    *p2=*p2-1;
    cout<<"the value of d is " <<*p2<<endl;
     cout<<"without dereference operator of pointer " <<p2 <<endl;

     cout<<"size of pointer " <<sizeof(*p2)<<endl;

    return 0;
}


