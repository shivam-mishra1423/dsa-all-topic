#include<iostream>
using namespace std;

int count=0;//globle variable
void print()
{
    if(count==4){
        return;
    }
    else{
        cout<<count<<endl;
        count++;
        print();
    }
}
int main()
{
    print();
}
