#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

unordered_set<int>st;

for(int i=0;i<5;i++){
    int val;
    cout<<"enter val"<<endl;
    cin>>val;
    st.insert(val);
}

for(auto it=st.begin();it!=st.end();it++){
    cout<<*it<<" ";
}
}
