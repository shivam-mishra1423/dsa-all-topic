/////tringle pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the row "<<endl;
    cin>>n;


     int start=1;////initial value of printing
    int i=1;
    while(i<=n){

        int j=i;
        while(j<=n){

            cout<<start;
            j++;
    start++;///upad
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
