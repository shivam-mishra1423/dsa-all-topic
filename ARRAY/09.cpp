#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {

int n=nums.size();
  int j = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                //nums[j] = nums[j] + nums[i];
                //nums[i] = nums[j] - nums[i];
                //nums[j] = nums[j] - nums[i];
                cout<<"i"<<i<<endl;
                cout<<j<<endl;
                ++j;
            }
        }
   /* for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    */

}
int main()
{
vector<int>nums={1,2,3,0,0,0};
 moveZeroes(nums);
}
