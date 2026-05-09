#include<iostream>
using namespace std;

//left side k lye
int firstocc(int arr[],int n,int key){
int ans=-1;
int s=0, e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid] == key){
        ans = mid;
        e= mid-1;
    }
    else if(key > arr[mid]){//hme right part me jana hi
        s = mid + 1;
    }
    else if(key < arr[mid]){//left me jow
        e = mid - 1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
//right side k lye
int secondocc(int arr[],int n,int key){
int ans=-1;
int s=0, e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid] == key){
        ans = mid;
        s= mid+1;//change part
    }
    else if(key > arr[mid]){//hme right part me jana hi
        s = mid + 1;
    }
    else if(key < arr[mid]){//left me jow
        e = mid - 1;
    }
    mid=s+(e-s)/2;
}
return ans;
}

int main()
{
    int even[]={1,2,3,3,3,4,5,6};
    int odd[]={1,2,3,4,5};
    cout<<"first index "<<firstocc(even,8,3)<<endl;
    cout<<"second index "<<secondocc(even,8,3);

}
