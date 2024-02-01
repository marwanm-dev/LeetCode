#include <bits/stdc++.h> 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            auto nextIt=it+1;
            if (nextIt != nums.end() && *it == *nextIt){
                return true;
            }
        }
        return false;

    }
};