//missing element
//brute force
//this is not the batter solution
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5};

    for(int i=1;i<=5;i++){
            int cnt=0;
        for(int j=0;j<4;j++){
            if(arr[j]==i){
                cnt=1;
                break;
            }
        }
    if(cnt==0){
        cout<<i;
    }
    }
}
*/

//optimised solution
//not optimal solution
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5};

    int hash[5]={0};//hash array

    //

    for(int i=0;i<4;i++){
        hash[arr[i]]++;
    }

    //checking the frequently
    for(int i=1;i<=5;i++)
    {
        if(hash[i]==0){
            cout<<i<<endl;
        }
    }
}
*/

#include<iostream>
using namespace std;
#include<vector>
int missing(vector<int>&a, int n){
//summation of the first n number
int s1 = (n *(n+1))/2;

//summation of all array element
int s2 =0;
for(int i=0;i<n-1;i++){
    s2+=a[i];
}
int miss=s1-s2;
return miss;
}
int main()
{
    vector<int>a={1,2,3,5};
    int n=a.size()+1;//because 0 indexing size =4 now 4+1;
    int ans=missing(a,n);
    cout<<ans;
}
