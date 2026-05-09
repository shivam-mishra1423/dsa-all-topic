#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the element "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element  "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    cout<<"thr largest element of the array " <<arr[n-1]<<endl;

}
