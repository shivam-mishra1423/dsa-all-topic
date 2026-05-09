#include<iostream>
using namespace std;
int findsplit(int arr[], int n){
int leftsum=0;
for(int i=0;i<n;i++){
    leftsum += arr[i];
    int midsum=0;
    for(int j=i+1;j<n;j++){
        midsum+=arr[j];
        int rightsum=0;
        for(int k=j+1;j<n;j++){
        rightsum+=arr[k];
    }

    if(leftsum==rightsum==midsum){
        return i+1;
    }
    }
}
return -1;///means nahi
}

///printing
void printTwoParts(int arr[], int n)
{
    int splitPoint =findsplit(arr, n);

    if (splitPoint == -1 || splitPoint == n )
    {
        cout << "Not Possible" <<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(splitPoint == i)
            cout << endl;
        cout << arr[i] << " " ;
    }
}

int main()
{
    int arr[]={1,2,0,3,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    findsplit(arr,n);

   printTwoParts(arr,n);
}

