#include<iostream>
using namespace std;
bool print(int *p){
cout<<*p;
}

void update(int *p){
// p = p+1;
 //cout<<"inside the function " <<p<<endl;


 //value increment kr skte h
 *p=*p + 1;
}
int getsum(int arr[],int n){
    cout<<sizeof(arr)<<endl;
    int sum=0;
for(int i=0;i<n;i++){
    sum = sum + arr[i];
}
return sum;
}
int main()
{
    /*
    int value=5;
    int *p=&value;
   //print(p);


   cout<<"before update " <<*p<<endl;
   update(p);
   cout<<"after update the value of p " <<*p<<endl;
*/
   int arr[5]={1,2,3,4,5};

  cout<<"sum is : "<<getsum(arr,5);

}
