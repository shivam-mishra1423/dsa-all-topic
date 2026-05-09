#include<iostream>
using namespace std;
int main()
{
    //pointer to int is created, and pointing to some garbage value
    //int * p  = 0;
    //cout<<*p;

/*
    int i=5;
    int *q=&i;
    cout<<q <<endl;
    cout<< *q <<endl;

    int *p=0;
    p=&i;

    cout<<p <<endl;
    cout<< *p <<endl;
*/

    int  num=5;
    int *a=&num;
 cout<<"before " <<num <<endl;
     a++;
     cout<<"after " <<num <<endl;




    int *p=&num;

    cout<<"before " <<num <<endl;
     (*p)++;
     cout<<"after " <<num <<endl;



}
