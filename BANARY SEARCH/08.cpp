//first and last occurence
//using lenear search

#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,8,8,11,13};
    int n=8;
    int first=-1;
    int last=-1;
    int x=8;
    for(int i=0;i<n-1;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;//after meet first then store
            }
            else{
                last=i;//update every time
            }
        }
    }
    cout<<first<<endl;
    cout<<last<<endl;

}
