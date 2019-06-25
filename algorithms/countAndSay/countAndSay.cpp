class Solution {
public:
    string countAndSay(int n) {

    string res = "1";
    for (int i = 1; i < n; i++) {
        string tmp = "";
        int count = 1;
        unsigned idx = 0;
        while (idx < res.size()) {
            while (idx+1 < res.size() && res[idx] == res[idx+1]) {
                idx++;
                count++;
            }
            tmp += to_string(count)+res[idx++];
            count = 1;
        }
        res = tmp;
    }
    return res;
    }
};
