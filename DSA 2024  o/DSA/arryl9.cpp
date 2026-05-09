#include<iostream>
using namespace std;
void printarray(int arr[],int size ){//array name and array size;
cout<<"printing the array" <<endl;
//print the array
for(int i =0; i<size;i++)
{
    cout<< arr[i] << " ";
}
cout<<"printing done" <<endl;
}
int main()
{
/*
    int num[10]={10,12};
   printarray(num,10);
    int numsize = sizeof(num)/sizeof(int);
     cout<<"size of num is " <<numsize<<endl;

    int third[10]={0};
      printarray(third,10);



     int forth[10]={1};
     //printarray(forth,10);

     int forthsize = sizeof(forth)/sizeof(int);
     cout<<"size of forth is " <<forthsize<<endl;
*/

char ch[3]={'s','h','i'};
cout<<ch[0];
}
