#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6};

    int *p=&arr[0];
    p=p+1;
    cout<<*p<<endl;
}

