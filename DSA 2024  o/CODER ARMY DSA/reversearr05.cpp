//reverse the array we use swap approch
//we used swap keyword
#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int strtind=0;
    int endind=3;
    while(strtind<endind){
        swap(arr[strtind],arr[endind]);
        strtind++;
        endind--;
    };

    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    return 0;
}
