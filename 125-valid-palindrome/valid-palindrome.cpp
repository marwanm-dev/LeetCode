class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";

        for (char c : s) {
            if (isalnum(c)) { // Check if the character is alphanumeric
                x += tolower(c);
            }
        }
            cout << x;;

            int len = x.length();
        for (int i = 0; i < len / 2; i++) {
            if (x[i] != x[len - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};