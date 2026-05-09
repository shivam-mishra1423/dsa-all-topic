#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
//start ,end , mid / mid=start+end/2
int start=0, end=n-1;

while(start<=end)
{
//hm yaha three comparision krngea
int mid=(start+end)/2;//iskea wahajh se leet code me error aa rha h because integer ka maximum size limited hota hai
//mid=start+(end-start)/2; krte h to error nahi aata
if(arr[mid]==key){
    return mid;
}
//arr[mid]<key
else if(arr[mid]>key)
    start=mid+1;

    //arr[mid]>key
else{
   end=mid-1;
}
}
return -1;

}
int main()
{
int n;
cout<<"enter the size of the array "<<endl;
cin>>n;
int arr[100];
int key;
cout<<"enter the searching element " <<endl;
cin>>key;
cout<<"please entered the element in the sorted order " <<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<binarysearch(arr,n,key);
}
