#include<iterator>
#include<string>
class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        string::iterator it;
        for (it = address.begin(); it != address.end(); ++it) {
            if (*it == '.') {
                str.push_back('[');
                str.push_back(*it);
                str.push_back(']');
            } else {
                str.push_back(*it);
            }
            
        }
        return str;
    }
};