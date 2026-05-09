#include<iostream>
using namespace std;

void printcounting(int a)
{
    for(int i=1; i<=a; i++){
        cout<<i<<" " ;
    }
}

int main()
{
    int n;
    cin>>n;
    printcounting(n);//calling fun
}
