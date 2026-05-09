#include<iostream>
using namespace std;
int searcharr(int arr[],int n,int x){
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           index=arr[i];
        }
        else{
            index;
        }
    }

}
int main()
{
int arr[5]={1,2,3,4,8};
int x=5;
int res = searcharr(arr,5,x);
cout<<res<<endl;


}
