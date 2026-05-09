#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p =&i;
    int **p2=&p;

    cout<<endl <<endl <<"sab sahi chal raha hau " <<endl <<endl;

    cout<<"Address of i "<<&i<<endl;
    cout<<"printing -> means address of i "<<p<<endl;
    cout<<"address of p -> "<<&p<<endl;
    cout<<endl;
    cout<<"printing -> means address of p2 (*p2) -> "<<*p2<<endl;

    //printing the value of i\
    //three way
    cout<<"printing the value of i " <<endl;
    cout<< i <<endl;
    cout<<*p <<endl;
    cout<<**p2 <<endl;
}
