#include<iostream>
using namespace std;

int print(int sum, int start, int last){
///base case
if(start<last){
    cout<<sum;
}
sum=sum+start;
print(sum,start+1,last);
}

int main()
{
    int start=1;
    int last;
    cout<<"enter the last value "<<endl;
    cin>>last;
    int sum=0;
   cout<< print(sum,start,last);
}
