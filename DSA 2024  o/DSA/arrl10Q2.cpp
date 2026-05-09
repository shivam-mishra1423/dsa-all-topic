#include<iostream>
using namespace std;

int findunique(int arr[],int size){
int ans=0;
for(int i=0;i<size;i++){
    ans=ans^arr[i];
}
return ans;
}

int main()
{
    int arr[]={1,1,2,2,3,3,4};
    int final=findunique(arr,7);
    cout<<"unique is "<<final<<endl;

    /*
    //without function accessing
     int ans=0;
    for(int i=0;i<7;i++){
       ans=ans^arr[i];
    }
    cout<<ans;
    */


}
