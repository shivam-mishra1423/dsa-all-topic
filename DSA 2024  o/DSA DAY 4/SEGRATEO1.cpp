//not proper work
#include<iostream>
using namespace std;
int main()
{
   int arr[6]={1,0,1,0,1,0};
   int start=0, end=5;
   int count0=0 ,count1=0;
  for(int i=0;i<;i++) {
    if(arr[start]==0){
        start++;
   }
   else{
    if(arr[end]==0){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

  }
   for(int i=0; i<5;i++){
    cout<<arr[i]<<" "<<endl;
   }

};
