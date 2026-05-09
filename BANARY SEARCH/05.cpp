//lower bond
//if lower bond is not presente then return extreme point means
//lower bond -> smallest index such that   ##### arr[ind]>=x;
//when we apply lenear search then o(n) rotation
//when array is sorted then we apply linar search
//jb v grater than equal to ho to uss index ko store kar lge
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,5,8,8,10,10,11};

    int start=0;
    int end=10;

    int x=8;

    int ans=end;//support last index hai lower bond
    for(int i=0;i<end;i++){
        int mid=(start+end)/2;
        if(arr[mid]>=x){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    cout<<ans<<endl;
}


//time comp =o(logn) // because binary search
