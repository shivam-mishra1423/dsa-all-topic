#include<iostream>
#include<climits>
using namespace std;
int  printsum(int arr[][3],int n ,int m){
for(int i=0;i<n;i++){
        int sum=0;
    for(int j=0;j<m;j++){
       sum=sum+ arr[i][j];
    }
    cout<<"sum is " <<sum<<endl;
}
}
int largestrowsum(int arr[][3],int n,int m){
  int maxi = INT_MIN;
  int rowindex=-1;

  for(int i=0;i<n;i++){
        int sum=0;
    for(int j=0;j<m;j++){
       sum=sum+ arr[i][j];
    }
    if(sum>maxi){
        maxi=sum;
        rowindex=i;
    }
}
cout<<"the muximum sum is  " <<maxi<<endl;
return rowindex;
}
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //printing the element
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    printsum(arr,3,3);
    largestrowsum(arr,3,3);
}
