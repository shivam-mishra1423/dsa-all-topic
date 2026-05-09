#include<iostream>
#include<limits.h>//for INT_MIN?MAX
using namespace std;
//for minimum
int getMin(int num[],int n)
{
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(num[i] < min){
            min=num[i];
        }
    }
    //return min value
    return min;
}
int getMax(int num[],int n)
{
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //return max value
    return max;
}

int main()
{
    int size;
    cin>>size;

    //taking input in array
    int num[10];//[size]array k under variable dalna ghatiay practice hi
    for(int i = 0; i<size;i++)
    {
        cin>>num[i];
    }
  cout<<"maximum value is "<<getMax(num,10)<<endl;
  cout<<"minimum value is "<<getMin(num,10)<<endl;
}
