class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char, int> mpp;
        int l = 0, r = 0;
        int len = 0;

        while (r < n) {
            mpp[s[r]]++;
            
            // If there's a duplicate, shrink the window
            while (mpp[s[r]] > 1) {
                mpp[s[l]]--;
                l++;
            }
            
            // Calculate the maximum length of the current substring
            len = max(len, r - l + 1);
            
            // Move the right pointer
            r++;
        }

        return len;
    }
};
