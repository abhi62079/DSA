class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
       int index=-1;
      
       for(int i=n-1; i>0; i--){
        if(nums[i-1]<nums[i]){
            index=i-1;
            break;
        }
       }
    //    if(index==-1){
    //     reverse(nums.begin(),nums.end());
    //     return;
    //    }
    if(index!=-1){
       int swap_index=index;
       for(int j=n-1;j>index;j--){
        if(nums[j]>nums[index]){
            swap_index=j;
            break;
        }
       
       }
 swap(nums[index],nums[swap_index]);
    }
 reverse(nums.begin()+index+1,nums.end());
    }
};