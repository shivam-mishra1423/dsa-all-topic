#include<iostream>
#include<string>
using namespace std;
char accsess(string s, string mid, int k){


s.insert(k,mid);
cout<<s<<endl;
}
int main()
{
    string name="shivammishra";
    int k=5;
    string mid="mishra";

    cout<<name<<endl;
    accsess(name,mid,k);
}
