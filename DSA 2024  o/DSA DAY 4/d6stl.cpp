#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter size " <<endl;
    cin>>n;
vector<int>v(n);
cout<<"enter your element " <<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
}
int res=count(1);
cout<<res<<endl;
}
