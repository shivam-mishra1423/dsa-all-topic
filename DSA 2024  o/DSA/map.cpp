#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;

    m[1]="love";
    m[2]="love";
    m[3]="kumar";
m.insert({5,"shivam"});

    for(auto i : m){
        cout<<i.first<<endl;
    }

     for(auto i : m){
        cout<<i.second<<endl;
    }

    cout<<"finding 2 -> " <<m.count(2);
}
