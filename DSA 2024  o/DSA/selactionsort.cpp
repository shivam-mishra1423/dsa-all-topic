#include<iostream>
#include<vector>
using namespace std;
int selectionsort(vector<int>& arr,int n){
for(int i=0 ; i<n-1;i++){
    int minindex = i;
    for(int j= i+1; j<n;j++){
        if(arr[j] < arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[minindex],arr[i]);
}
}
int main()
{
    int arr[]= {1,45,6,7,89,5};
   int ans = selectionsort(&arr,6);
   cout<<ans;
}
