#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>p;  //max heap wali ye hai

    p.push(10);
    p.push(11);
    p.push(12);
    p.push(18);
    p.push(15);

    cout<<p.top()<<" ";

    ///delete karne k liye
    p.pop();
     cout<<p.top()<<" ";


     ////size v print kara sakte hai
     cout<<p.size();


     cout<<endl;
     ////priting all the element of the queue
     while(!p.empty())
     {
         cout<<p.top()<<" ";
         p.pop();
     }
}
