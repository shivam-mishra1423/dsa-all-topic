#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j+1]){
            false;
        }
    }
}
return true;
}
int main(){
int arr[5]={1,2,3,4,5};
int ans=issorted(arr,5);
cout<<ans<<endl;

}
