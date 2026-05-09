#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};//maximum size we take 10 to the power 5
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }



    /////check the query
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<number<<"apear "<<hash[number]<<endl;
    }
}
