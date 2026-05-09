#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={0,1,2,0,1};
int n=5;
    int countzero=0;
    int countone=0;
    int counttwo=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countzero++;
        }
        else if(arr[i]==1){
            countone++;
        }
        else{
            counttwo++;
        }
    }

    for(int i=0;i<countzero;i++){
        arr[i]=0;
    }
    for(int i=countzero;i<countzero+countone;i++){
        arr[i]=1;
    }
     for(int i=countzero+countone;i<n;i++){
        arr[i]=2;
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}



}
