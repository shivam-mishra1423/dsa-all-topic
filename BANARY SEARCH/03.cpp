//binary search
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int v[],int n,int key)
{
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        int mid=(start+end)/2;
        //mid found
        if(v[mid]==key){
            return mid;
        }
        //if mid is grater than key
        else if(v[mid]>key){
            end=mid-1;
        }
        //if mmid is small
        else if(v[mid]<key){
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;
    int v[n];
    cout<<"enter the element "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int key;
    cout<<"enter the searching element "<<endl;
    cin>>key;

    int index=binarysearch(v,n,key);
    cout<<"the element found in the index no "<<index<<endl;

}
