//print the number start to ind using recursion
#include<iostream>
using namespace std;
void fun(int start,int end){
//base case
if(end==start){
        cout<<start<<endl;
    return;
}
cout<<start<<endl;
fun(start+1,end);
}
int main()
{
    int start;
    int end;
    cout<<"enter the starting value "<<endl;
    cin>>start;
    cout<<"enter the ending value "<<endl;
    cin>>end;
    fun(start,end);
}
