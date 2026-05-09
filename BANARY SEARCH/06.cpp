//upper bond -> smallest index such that ##arr[ind]>x   means x searching element se bada ho
//smallest difference between lower bond
//arr[]={1,2,3,4,5,6};
//x=1 than return index 1 because upp+bond is 2
//x=3 return index 3 means 4 is upper bond of 3
//x =7  than retunr -1 because no one is greater than 7
//only difference is >= k jagh  > only
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
        if(arr[mid]>x){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    cout<<ans<<endl;
}
