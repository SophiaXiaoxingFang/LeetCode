class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    int n=nums.size();
    if(n<1) return 0;

    int maxsum=nums[0];
    int dp=nums[0];
    for(int i=1;i<n;i++){
        dp=max(dp+nums[i],nums[i]);
        maxsum=max(maxsum,dp);
    }
    return maxsum;
    }
};
