/////printing the string uisng recursion
#include<iostream>
using namespace std;
void print(string &s, int start,int end)
{
    if(start==end){
        return;
    }
    cout<<s[start]<<" ";
    print(s,start+1,end);
}
int main()
{
    string s="shivam";

    int start=0;
    int end=6;
    print(s,start,end);
}
