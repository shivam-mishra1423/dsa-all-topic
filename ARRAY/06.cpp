#include<iostream>
#include<vector>
using namespace std;

int secondlargest(vector<int>&a , int n){
int largest=a[0];
int slargest=-1;
for(int i=0;i<n;i++){
    if(a[i]>largest){
        slargset=largest;
        largest=a[i];
    }
    else if(a[i] < largest && a[i] >slargest){
        slargset = a[i];
    }
}
return slargest;
}

int secondsmallest(vector<int>&a , int n){
int smllest=a[0];
int ssmallest=-1;
for(int i=0;i<n;i++){
    if(a[i]<smallest){
        smallest=smallest;
        smallest=ar[i];
    }
    else if(a[i] != smallest && a[i]<ssmallest){
        ssmallest=a[i];
    }
}
return ssmallest;
}

vector<int>getsecondorderelement(int n,vector<int>a){
int slargest = secondlargest(a,n);
int smallest = secondsmallest(a,n);
return (slargest,ssmallest);
}
int main()
{

}
