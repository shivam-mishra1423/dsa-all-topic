//tringle pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the row  "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
       int k=1;
        while(k<=i){
            cout<<" ";
            k++;
        }
        i++;
    }
}
