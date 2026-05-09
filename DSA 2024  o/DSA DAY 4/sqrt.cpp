// input = 100  op =10
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the square root searching element " <<endl;
    cin>>x;
    int start=0;
    int end =x;
    int mid;
    int ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==x){
            ans=mid;//mid me store kr dege
            break;
        }
        else if(mid*mid<x){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    cout<<"the square root of "<<x << " is " <<ans;
    return 0;
}
//time complixity o(log2N) because kaam se kaam itna time lgega he
//space complixity o(1)
