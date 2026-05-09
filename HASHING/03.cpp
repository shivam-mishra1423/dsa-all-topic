#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,2,2,5};
int n=5;
    //precompute
    int hash[13]={0};//maximum size we take 10 to the power 5
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }

    for(int i=0;i<n;i++){
    if(hash[i]>0){
        cout<<i<<endl;
    }
    }

/*

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
    */
}
