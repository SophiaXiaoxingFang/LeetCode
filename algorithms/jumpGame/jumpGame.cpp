class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int vmax=0;
        for(int i=0;i<n;i++)
        {
            if(i>vmax) return false;
            vmax= max(nums[i]+i,vmax);
        }
        return true;

    }
};
