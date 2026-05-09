#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size "<<endl;
    cin>>n;
    vector<int>arr(n);
    //taking the input
   cout<<"enter the element " <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   cout<<"the sorting element are " <<endl;
   sort(arr.begin(),arr.end());

   //printing the sorting element
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }


   cout<<"after push the element in the front " <<endl;

   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }

    return 0;
}
