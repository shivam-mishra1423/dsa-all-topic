//basic
//print n to 1
#include<iostream>
using namespace std;
void fun(int en, int st){
//base case
if(en<st){
    return;
}
else{
    cout<<en<<endl;
    fun(en-1,st);
}
}
int main()
{
    int en;//en means end
    cout<<"enter the end value "<<endl;
    cin>>en;
    int st=1;//st means start
    cout<<"printing the value "<<endl;
    fun(en,st);
}
