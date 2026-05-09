//lower bond implemenation
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,8,5};

    int lb=5;

    for(int i=0;i<6;i++){
        if(arr[i]>=lb){
            cout<<i<<endl;
        }
    }
}
