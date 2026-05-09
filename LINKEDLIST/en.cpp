#include<iostream>
using namespace std;
int main()
{
   int ans=1;
   int arr[]={1,2,3,5};
   for(int i=0;i<5;i++){
    if(arr[i]==ans){
        ans++;
    }
    else{
        cout<<ans;
    }
   }

}
