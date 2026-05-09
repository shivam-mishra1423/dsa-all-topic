#include<iostream>
using namespace std;

//x-or all array element;
int finddublicate(int arr[],int size){
int ans=0;
for(int i=0;i<size;i++){
    ans=ans^arr[i];
}

//x-or[1,n-1]
for(int i=0;i<size;i++){
    ans=ans^i;
}
return ans;
}
int main()
{
    int arr[]={1,2,3,4,5,5};
   int ans = finddublicate(arr,6);
   cout<<ans;
}
