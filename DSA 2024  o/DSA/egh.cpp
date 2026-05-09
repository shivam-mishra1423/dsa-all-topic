#include<iostream>
using namespace std;
//binary search
int binary(int arr[],int size,int key){
  int s=0, e=size-1;
  int mid=(s+e)/2;
  for(int i=0;i<=size;i++){
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else if(key<arr[mid]){
        e=mid-1;
    }
  mid=(s+e)/2;

  }
  return -1;
}
int main()
{
   int even[]={1,2,3,4,5,6};
   int odd[]={1,2,3,4,5,6,7};

   int index=binary(even,6,5);
   cout<<index<<endl;

}
