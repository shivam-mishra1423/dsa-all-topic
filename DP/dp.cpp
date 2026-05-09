#include<iostream>
#include<vector>
using namespace std;
int fun(int n,int &cnt,vector<int>&dp){
if(n==0){
        cnt++;
    return 0;
}
if(n==1){
        cnt++;
    return 1;
}

if(dp[n]!=-1){
    return dp[n];
}

cnt++;

return dp[n] = fun(n-2,cnt,dp)+fun(n-1,cnt,dp);

}
int main(){


int n;
cout<<"enter a number"<<endl;
cin>>n;

vector<int>dp(n+1,-1);

int cnt=0;
int ans = fun(n,cnt,dp);
cout<<ans<<endl;
cout<<cnt;

}
