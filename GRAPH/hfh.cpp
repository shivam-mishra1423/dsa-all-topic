#include<iostream>
using namespace std;
int power(int number, int time){
if(time==1){
    return 1;
}
return number*power(number,time-1);
}
int main(){
int number,p;
cout<<"enter the power of the number "<<endl;
cin>>number;
cout<<"enter the total times of power "<<endl;
cin>>p;

cout<<power(number,p);

}
