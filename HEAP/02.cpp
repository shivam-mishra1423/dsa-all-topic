////////step downmethod
#include<iostream>
using namespace std;
/////Array convert max
///maxheap to sorted array


///////agar iss while loop se kare to 0(n) me he solved ho jyga
void heapify(int arr[],int index,int n)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n&&arr[left]>arr[largest]){//lesst than < kar they to min heap me convert ho jyga
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){////max heap me convert ho jyga agar < less than kar they to ho jyga
        largest=right;
    }

    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}

void bulidmaxheap(int arr[],int n)
{
  //// step dowm
  for(int i=n/2-1;i>=0;i--){
    heapify(arr,i,n);
  }
}

void printheap(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

///
//70 14 18 11 5 13 8 9 10 3///after swap first first index 3 14 18 11 5 13 8 9 10 70
void sortarray(int arr[],int n){

    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,0,i);////heapify function yaha size i h or hepify 3  se 10 tk he lgee n-1
    }

}
int main()
{
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    bulidmaxheap(arr,10);////is function me 10 mewans kitne element present hai

    sortarray(arr,10);
    printheap(arr,10);
}
