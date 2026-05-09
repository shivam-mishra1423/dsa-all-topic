#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};


    int sum=0;
    for(int i : arr){
            if(i==2){
                continue;
            }
        sum=sum+i;
    }

    cout<<sum;
}
