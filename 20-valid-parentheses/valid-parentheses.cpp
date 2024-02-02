class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp{{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> stack;
        for (char ch : s) {
            if (mp.find(ch) == mp.end())
                stack.push(ch);
            else {
                if (!stack.empty() && stack.top() == mp[ch])
                    stack.pop();
                else
                    return false;
            }
        }
        return stack.empty();
    }
};