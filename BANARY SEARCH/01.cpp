//linear search
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int k=7;//k is the searching element
    int n=8;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<k<<" is found in" <<i<<" index "<<endl;
        }
    }
}
