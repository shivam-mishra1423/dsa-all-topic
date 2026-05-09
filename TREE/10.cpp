//l4 brute force longest sub array
#include<iostream>
#include<vector>
using namespace std;
void longest(vector<int>&arr){

int len=0;
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr.size();j++){
            int sum=0;
        for(int k=i;k<j;k++){
            sum+=arr[k];
        max(len,j-i+1);
        }
    }
}
cout<<len<<endl;
}
int main()
{
    vector<int>v={1,2,3,1,1,1,1,4,2,3};

    longest(v);

}
//approx  o(n3);
