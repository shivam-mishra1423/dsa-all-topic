#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {10,4,1,3,2,7};

    for(int i=0;i<5;i++)//ye total no of round hi
    {
        int index = i;//yaha se nichea tk ye min element find kr rha h or swap kr rha h
    for(int j = i+1;j<6;j++){//star searching from  first index
        if(arr[j]<arr[index])
            index=j;
    }
    swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" "<<endl;
    }

}
