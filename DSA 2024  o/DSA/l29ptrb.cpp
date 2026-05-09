#include<iostream>
using namespace std;
void update(int **p){
//p=p+1;
//khuh change hoga--> no

//*p=*p + 1;
//khuh change hoga ?? -->yes;

**p=**p + 1;
//khuh change hoga --yes;
}
int main()
{
    int i=5;
    int *p=&i;

    int **p2=&p;


  /*  cout<<&i <<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    */

    cout<<"before " <<i <<endl;
    cout<<"before " <<p <<endl;
    cout<<"before " <<p2 <<endl;
    update(p2);
    cout<<"after " << i <<endl;
    cout<<"after " << p <<endl;
    cout<<"after " << p2 <<endl;
}
