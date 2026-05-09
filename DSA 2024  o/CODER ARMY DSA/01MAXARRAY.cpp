//find the minimum element of the array
//var res to store the min element and comparision
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array " <<endl;
cin>>n;
int arr[n];
//takint he input in the array

for(int i=0;i<n;i++){
   cin>>arr[i];
}
//printing the array
int minele=arr[0];
for(int i=0;i<n;i++){
   if(arr[i]<minele){
    minele=arr[i];
   }
}
cout<<"the minimum element is "<<minele<<endl;
return 0;

}
