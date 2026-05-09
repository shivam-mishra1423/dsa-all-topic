//basic recursion problem
//Q1 print name n times using recursion
#include<iostream>
using namespace std;
void printname(int start,int n){
//base case
if(start>n){
   // cout<<"shivam"<<endl;
    return;
}
else{
   cout<<"shivam "<<endl;
   printname(start+1,n);
}
}
int main()
{
    int n;
    cout<<"enter total number of times "<<endl;
    cin>>n;

    cout<<"name is printing"<<endl;
    printname(1,n);// is the starting
}
//time complixity o(n)
