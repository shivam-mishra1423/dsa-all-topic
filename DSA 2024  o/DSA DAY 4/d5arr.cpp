//divide the array into two sub array
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={3,4,-2,5,8,20,-10,8};
    //int sum1=0, sum2=0;
//int n=8;//n is the size of the above array

   /* for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        sum1+=arr[j];
    }
    for(int j=i+1;j<n-1;j++){
        sum2=arr[j];
    }
    }
    if(arr[sum1]==arr[sum2]){
        cout<<"yes";
    }
    else{
        cout<<"no" <<endl;
    }
    */
    int total=36;
 int prifix=0;
    int ans;
    for(int i=0;i<7;i++){

        for(int j=i;j<=i;i++){
            prifix=prifix + arr[j];
            ans =total-prifix;
        }
    }
    if(ans==prifix){
        return 1;
    }
    else{
       return -1;
    }
    cout<<ans;
    return 0;
}
