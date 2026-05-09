//factorial of n number
#include<iostream>
using namespace std;
int fun(int n){
//base case
if(n==1 || n==0){
    return 1;
}
else{
  return n * fun(n-1);
}

}
int main()
{
    int n;
    cout<<"enter the which find the factorial "<<endl;
    cin>>n;
    int ans= fun(n);
    cout<<ans<<endl;
}
