#include<iostream>
using namespace std;
void print(int n, int &ans){
if(n==1){
    return ;
}

  ans = n * print( n - 1,ans);
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
   print(n);
}
