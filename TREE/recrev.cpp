#include<iostream>
using namespace std;
int fib(int n){
if(n==0){
    return 1;
}

    return n*fib(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans=fib(n);

    cout<<ans;
}
