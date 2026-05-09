#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minindex = i;
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
        swap(arr[minindex],arr[i]);
    }
}
}
int main()
{
    int arr[]={1,4,5,7,6};
    selectionsort(arr, 5);
      for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


