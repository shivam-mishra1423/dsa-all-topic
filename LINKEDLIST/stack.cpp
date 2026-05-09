#include<iostream>
#include<vector>
using namespace std;
vector<int>big(vector<int>nums)
{
    int n=nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int maxi=-1;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[i]){
                maxi=nums[j];
                break;
            }
        }
        ans.push_back(maxi);
    }

    return ans;
}
int main()
{
    vector<int>nums={4,5,2,25,7,8};
    vector<int>ans=big(nums);

    cout<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}
