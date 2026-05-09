/////priority queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //////priotity queue using min heap



    ///yaha jo phla int hai o type hai ki kis type ki queue hai
    priority_queue<int, vector<int>, greater<int>>p;////min heap hai ye yaha jo minimum hai uska pariority sabse haig hogi

    p.push(10);
     p.push(20);
      p.push(30);
       p.push(40);
        p.push(5);

        cout<<p.top()<<" ";


        while(!p.empty())
        {
            cout<<p.top()<<" ";
            p.pop();
        }

}

