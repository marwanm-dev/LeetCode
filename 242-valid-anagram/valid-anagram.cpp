class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms, mt;
        for (char c : s) {
            if (ms.find(c) == ms.end())
                ms.insert({c, 1});
            else
                ms[c]++;
        }
        for (char c : t) {
            if (mt.find(c) == mt.end())
                mt.insert({c, 1});
            else
                mt[c]++;
        }
        if (ms.size() == mt.size()) {
            for (auto it : ms)
                if (it.second != mt[it.first])
                    return false;
        } else
            return false;
        return true;
    };
};