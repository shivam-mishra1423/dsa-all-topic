#include<iostream>
#include<set>
#include<algorithm>
using namespace std;



int main()
{


int arr[]={4,2,3,6,1};

int index=arr[0];
for(int i=1;i<=4;i++){
    if(arr[i]<arr[index]){
        index=i;
    }
}
cout<<arr[index];
}
