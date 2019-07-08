class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

    int carry = 1, i = digits.size()-1;
    while (i>=0)
    {
        int tmp = digits[i]+carry;
        digits[i] = tmp%10;
        carry = tmp/10;
        i--;
   }
   if (digits[0]==0)
        digits.insert(digits.begin(), 1);
   return digits;
    }
};
