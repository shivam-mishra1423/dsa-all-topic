#include<iostream>
using namespace std;
string swap(string s){


string ans=s;
int start=0;
int end=ans.size()-1;

while(start<end){
    char temp=ans[start];
    ans[start]=ans[end];
    ans[end]=temp;
    start++,end--;
}
return ans;

}
int main()
{
    string s="shivam";

 string ans=   swap(s);

    cout<<ans<<endl;
}
