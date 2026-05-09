#include<iostream>
using namespace std;
int fun(int n,int &cnt){
if(n<=1){
        cnt++;
    return n;
}
cnt++;
return fun(n-2,cnt)+fun(n-1,cnt);

}
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
int cnt=0;
   cout<<fun(n,cnt);
   cout<<"total no of times of recursion"<<cnt;

}
