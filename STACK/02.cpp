//basic of stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int s[]={1,2,3,4,5};
    stack<int>st;
    for(int i=0;i<st.size();i++){
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty()){
        s[i]=st.top();
        i++;
        st.pop();
    }
    for(int i=0;i<st.size();i++){
        cout<<st[i]<<" ";
    }

}
