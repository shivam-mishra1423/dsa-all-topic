//check sorted

#include<iostream>
using namespace std;
bool check(int arr[]){
for(int i=0;i<5;i++){
    if(arr[i]>=arr[i-1]){

    }
    else{
        return 0;
    }
}
return 1;
}
int main()
{
    int arr[]={1,2,3,4,5};
   cout<<check(arr);
}
