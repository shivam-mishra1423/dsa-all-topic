#include<iostream>
using namespace std;
int main()
{
    /*
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;



    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;;;;;;;;;;;
    cout<<sizeof(&ptr)<<endl;
*/
/*
int a[20]= {1,2,3,5};
cout<<&a[0] <<endl;
cout<<&a<<endl;
cout<<a<<endl;

int *p = &a[0];
cout<<p[0] <<endl;
cout<<*p<<endl;
cout<<&p<<endl;
*/

int arr[10]={1,2,3,4,5};

int *ptr=&arr[0];

ptr= ptr+3;
cout<<*ptr;
}
