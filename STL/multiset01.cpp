//multi set me dublicate element present ho sakte h but o v sorted order me honge
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
