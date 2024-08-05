class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mpp;
        int cnt = 0;

        // Count the frequency of each character
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }

        // Check for pairs and count them
        bool odd_found = false;
        for (auto &pair : mpp) {
            if (pair.second % 2 == 0) {
                cnt += pair.second; // If frequency is even, it can be fully used
            } else {
                cnt += pair.second - 1; // If frequency is odd, use the largest even part
                odd_found = true; // Remember that there's an odd frequency character
            }
        }

        // If there's any character with an odd frequency, we can place one in the center
        if (odd_found) {
            cnt += 1;
        }

        return cnt;
    }
};
