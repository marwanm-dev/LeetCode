#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int c = 0;

        for (auto i = 0; i < s.length(); i++) {
            if (i != s.length() - 1 && m[s[i + 1]] > m[s[i]])
                c -= m[s[i]];
            else
                c += m[s[i]];
        }

        return c;
    }
};