#include<iostream>
using namespace std;
int start=0;//Globle variable

void print()
{
    //base condition or spacific condition
    if(start==10){
        return;
    }
    else{
        cout<<"shivam "<<endl;
        start++;
        print();//recursive call;
    }
}
int main()
{
    print();
}
