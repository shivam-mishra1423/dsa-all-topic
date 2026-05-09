#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            //arar awap function allow na ho to
            /*
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;


        }
        else{
            break;
        }
    }
}

}
int main(){

  int n;
  cout<<"enter the size of the array(0-10) " <<endl;
  cin>>n;
  int arr[10];
  //taking the input in the array
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

insertionsort(arr,n);

//printing the array
cout<<"printing the array in sorting order " <<endl;
for(int i=0;i<n;i++){
    cout<<arr[i] << " ";
}
return 0;

}
