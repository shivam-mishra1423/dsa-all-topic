//printing the number 1 to n
#include<iostream>
using namespace std;

void fun(int start,int ed){
//base case

if(start==ed){
    cout<<ed<<endl;
    return;
}
else{
        cout<<start<<endl;
    fun(start+1,ed);
}
}
int main()
{
    int start=1;
    int ed;//thisd is end value
    cout<<"enter the end value "<<endl;
    cin>>ed;
    cout<<"NUMBER IS "<<endl;
    fun(start,ed);
}
