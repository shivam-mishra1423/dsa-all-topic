//divide the array in two subpart yes return 1 else 0
#include<iostream>
#include<vector>
#include<climits>//int max min
using namespace std;
bool divide(vector<int>arr){

    int maxi= INT_MIN, prefix=0, total_sum=0, n=arr.size();
    //for find total sum
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        int ans = total_sum - prefix;
        if(ans==prefix){
            return 1;
        }
        else{
            return -1;
        }
    }

}




int main()
{
    int n;//taking the size of the vector
    cout<<"enter the size of the vector" <<endl;
    cin>>n;
   vector<int>v (n);
   cout<<"enter the vector element " <<endl;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }

   cout<<divide(v);
}
