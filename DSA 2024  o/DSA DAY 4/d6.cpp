#include<iostream>
using namespace std;
int main()
{
  int arr[5]={2,4,5,7,4};
  bool issorted=false;
  for(int i=0;i<5;i++){
    for(int j=i;j<i+1;j++){
        if(arr[j]>arr[j+1]){
            issorted=true;
        }
        else{
            issorted=false;
        }
    }

  }
  cout<<issorted<<endl;
}
