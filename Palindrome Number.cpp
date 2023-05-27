class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string h = s;
        reverse(h.begin(), h.end());
        return (s == h);
    }
};
