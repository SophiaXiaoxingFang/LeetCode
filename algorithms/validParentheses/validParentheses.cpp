class Solution {
public:
    bool isValid(string s) {
    stack<char> myStack;
    string left="([{", right=")]}";
    for (int i=0; i < s.size(); i++)
    {
        if (left.find(s[i])!=string::npos)
            myStack.push(s[i]);
        else
            if (myStack.size()!=0 && left.find(myStack.top())==right.find(s[i]))
                myStack.pop();
            else
                return false;
    }
    return myStack.size()==0;
    }
};
