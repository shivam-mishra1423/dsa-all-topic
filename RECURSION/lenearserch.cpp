#include<iostream>
using namespace std;
int linearserch(int arr[],int start,int end,int k)
{
    if(start==end){
        return 0;
    }
    if(arr[start]==k){
        return 1;
    }
 return linearserch(arr,start+1,end,k);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int start=0;
    int end=6;
    int k=5;
   cout<< linearserch(arr,start,end,k);
}
