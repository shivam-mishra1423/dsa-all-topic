//using recursion print summision of 1 to n
//1+2+3=6 if n = 3
#include<iostream>
using namespace std;
int fun(int n){
//base case
if(n==0){

    return 0;
}
else{
   return  n+fun(n-1);//recursive function //in recursive function the problem is broken down into small parth
}

}
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int ans =fun(n);
    cout<<ans<<endl;
}
