#include<iostream>
#include <cstring>
using namespace std;

string ulta(string &s){

    string res="";

for(int i=s.size();i>=0;i--){
    res+=s[i];
}
return res;


}
int main()
{

string name;
 cout<<"enter you name "<<endl;
 cin>>name;

 cout<<ulta(name);


}
