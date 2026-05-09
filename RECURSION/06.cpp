#include<iostream>
using namespace std;
void even(int n){
//base case
if(n==2){
    cout<<"even"<<2<<endl;
    return;
}

if(n%2==0){
    cout<<n<<"even"<<endl;
}
else{
    cout<<n<<"odd"<<endl;
}
even(n-1);
}
int main()
{
    int n;
    cin>>n;
    even(n);
}
