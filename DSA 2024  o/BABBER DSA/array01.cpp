//babber
#include<iostream>
using namespace std;


int main(){

//declear the arrray
int num[15];

//accessing an array

cout<<"the value of the zero index " <<num[0]<<endl;

//cout<<"the value of the 20 index " <<num[20]<<endl;

//initilization the array
int second[3]={1,2,3};
cout<<"array of the second index  "<<second[2]<<endl;

int thrd[15]={1,2,3,4};
cout<<thrd[4]<<endl;

//insilising all location with 0
int forth[10]={0};
for(int i=0;i<10;i++){
    cout<<forth[i];
}

//insilising all location with 1[it is not possible]
int fifth[10]={0};
for(int i=0;i<10;i++){
    cout<<forth[i];
}


return 0;

}
