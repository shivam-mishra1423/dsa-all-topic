#include<iostream>
using namespace std;
//using binary search approch
//first occurence
int firstocc(int arr[],int n,int key){
int s=0 , e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){

    if(arr[mid]==key){//agar equal ho gye to answer me store kra liya
        ans = mid;
        e=mid-1;
    }
    else if(key>arr[mid]){//right me jeo
        s=mid+1;
    }
    else if(key<arr[mid]){//left me joe
        e=mid-1;
    }
    int mid=s+(e-s)/2;//update mid
}
return ans;
}
//last occurence
int lastocc(int arr[],int n,int key){
int s=0 , e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){

    if(arr[mid]==key){//agar equal ho gye to answer me store kra liya
        ans = mid;
        s=mid+1;
    }
    else if(key>arr[mid]){//right me jeo
        s=mid+1;
    }
    else if(key<arr[mid]){//left me joe
        e=mid-1;
    }
    int mid=s+(e-s)/2;//update mid
}
return ans;

}
int main(){
int even[5]={1,2,3,3,5};
cout<<"first occurence is "<<firstocc(even,5,10)<<endl;
}
