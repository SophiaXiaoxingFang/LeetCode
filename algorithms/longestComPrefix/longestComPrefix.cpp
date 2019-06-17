class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {

        if(strs.empty())
            return "";
        string tmp = strs[0];
        int count = tmp.size();
        for(int i = 1;i < strs.size();++i)
        {
            for(int j = 0;j < count;++j)
            {
                if(strs[i][j] != tmp[j])
                {
                tmp = tmp.substr(0,j);
                count = j;
                break;
                }
            }
        }
        return tmp;
    }
};
