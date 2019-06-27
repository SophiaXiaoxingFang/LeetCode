class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3) return 0;
        int i = 0;
        int j = height.size()-1;
        int res = 0;
        int leftmax=0;
        int rightmax=0;
        while(i<j)
        {
            leftmax = max(leftmax, height[i]);
            rightmax = max(rightmax, height[j]);
            if(leftmax < rightmax)
            {
                res += leftmax-height[i];
                i++;
            }
            else
            {
                res += rightmax-height[j];
                j--;
            }
        }
        return res;
    }
};
