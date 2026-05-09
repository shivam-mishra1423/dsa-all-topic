#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,5,2,2};

    int n=5;
    for(int i=0;i<n;i++){
        int l_sum=0;
        int r_sum=0;
        for(int j=i+1;j<n;i++){//for the right sum
            r_sum+=arr[j];
        }
        for(int k=0;k<i;k++){
            l_sum+=arr[k];
        }
        if(l_sum==r_sum){
            cout<< i+1<<endl;
        }
    }

}
