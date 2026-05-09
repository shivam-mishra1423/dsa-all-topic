//move all the 0  not complete but both code is accepted in leet code
  int j = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                //nums[j] = nums[j] + nums[i];
                //nums[i] = nums[j] - nums[i];
                //nums[j] = nums[j] - nums[i];
                ++j;
            }
        }
    }



    //new
         int n=nums.size();
      int j=-1;
      for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
      }
      if(j==-1){
       return ;
      }
      for(int i=j+1;i<n;i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
      }

for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
}

    }
