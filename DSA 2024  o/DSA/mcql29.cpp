#include<iostream>
using namespace std;
int main()
{
    int f=8;
    int s=10;
    int *p=&s;
    *p=9;
    cout<<f <<s<<endl;
}
