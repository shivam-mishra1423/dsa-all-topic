//not complete and not understand
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int first=-1;
        for(int i=0;i<nums.size()-1;i++){
            int mid=(start+end)/2;
            if(nums[mid]==target){
              first=mid;
              mid=end-1;//move in left side because check small element
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{//when mid is grater than target
                end=mid-1;
            }
        }
        return first;

    }

    //

int last(arr,n,x){
    int star0;
    int end=arr.size()-1;
    last=-1;
    for(int i=0;i<nums.size()-1;i++){
        int mid=(start+end)/2;
        if(nums[mid]==x){
            last=mid;
            start=mid+1;//move in right side becuse check in last index element;
        }
        else if(nums[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
