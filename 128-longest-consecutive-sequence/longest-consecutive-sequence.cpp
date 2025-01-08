class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int n=nums.size();
        if(n==0)return 0;
        int maxi=INT_MIN;
        for(int i=0; i<n-1; i++){
            while(i<n-1&&nums[i]==nums[i+1]){
                i++;
            }
            if(i<n-1&&nums[i+1]-nums[i]==1){
                cnt++;
            }else if(i<=n-1){
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};