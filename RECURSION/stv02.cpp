//print 1 to n lineary
#include<iostream>
using namespace std;
void fun(int s, int e){
//base case
if(s>e){
    return;
}
else{
    cout<<s<<endl;
    fun(s+1,e);
}
}
int main()
{
    int i,n;
    cout<<"enter the starting number "<<endl;
    cin>>i;
    cout<<"enter the end value "<<endl;
    cin>>n;
    fun(i,n);
}
