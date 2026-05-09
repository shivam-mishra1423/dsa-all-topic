//print happy birthday using recursion

#include<iostream>
using namespace std;
void fun(int n){
//bsae case
if(n==0){
    cout<<"HAPPY BIRTHDAY"<<endl;
    return;
}
cout<<n<<"days left your birthday "<<endl;
fun(n-1);//recursive function
}

int main()
{
    fun(5);
}
