//Q sum of first n number using recursion
//two  way 1 is parameter  2  is functional
//if n is three then the summision is equal to 1+2+3=6
//this is parametric
#include<iostream>
using namespace std;
void fun(int i, int sum){
//base case
if(i<1){
     cout<<"sum is  "<<sum<<endl;
    return;
}
fun(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"enter your end value "<<endl;
cin>>n;
    fun(n,0);
}
