//factorial of n number using recursion
#include<iostream>
using namespace std;
int fact(int n){
    //base case
if(n==1){
    return n;
}
else{
    return n * fact(n-1);
}
}
int main()
{
    int n;
    cout<<"enter the number to find the factorial "<<endl;
    cin>>n;
   int ans = fact(n);
   cout<<"the factorial of "<<n<< " is "<<ans<<endl;
}
//t c=o(n);
//s c=o(n);auxiluary space
