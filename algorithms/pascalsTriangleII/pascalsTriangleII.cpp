class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex < 0)
            return vector<int>();
        vector<int> res(rowIndex + 1, 1);

        for (int i = 1; i <= rowIndex; i++)
            for (int j = i - 1; j > 0; j--)
                res[j] = res[j] + res[j - 1];
        return res;
    }
};
