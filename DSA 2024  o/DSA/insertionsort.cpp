#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>&arr,int n){
for(int i=0 ;i<n;i++){//traverasl the array element for rounds
        int temp = arr[i];
        //comparing
        int j = i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1]= arr[j];
            }
            else{//ruk jao
                    break;

            }
        }
        arr[j+1]=temp;

}

}

int main()
{
    int n;
    cout<<"enter the size of arr" <<endl;
    cin>>n;
 vector<int>arr(n);

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 insertionsort(arr,n);
 //printing the array
 for(int j=0;j<n;j++){
    cout<<arr[j];
 }
}
