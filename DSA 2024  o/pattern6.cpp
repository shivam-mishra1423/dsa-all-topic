#include<iostream>
using namespace std;
int main()
{
    int n=5;

    int i=1;
    while(i<=n){
    ///printing col 1 3 5
    if(i%2!=0){
        int j=1;
        while(j<=n){
            cout<<"*"<<" ";
            j++;
        }
    }
    else{
            int k=1;
            while(k<=n){
            if(k==1 || k==n){
                cout<<"*"<<" ";
            }
            else{
            cout<<"  ";
        }
        k++;
        }
    }
    cout<<endl;
    i++;

    }

}
