class Solution {
public:
    int jump(vector<int>& nums) {
        int ret = 0;
        int last = 0;
        int curr = 0;
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            if (i > last) {
                last = curr;
                ++ret;
            }
            curr = max(curr, i+nums[i]);
        }

        return ret;
    }

};
