#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,-2,-5,2,-4};

    int n=6;
    int pos[n/2];
    int neg[n/2];

    for(int i=0;i<n;i++){
        if(arr[i]>0){
                cout<<"enter in positive "<<arr[i]<<endl;
            pos[i]=arr[i];
        }
        else{
            cout<<"enter in negative "<<arr[i]<<endl;
            neg[i]=arr[i];
        }
    }

   for(int i=0;i<n/2;i++){
    arr[2*i]=pos[i];
    arr[2*i+1]=neg[i];
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}
