class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle empty vector case

        string prefix; // This will store the longest common prefix
        for (size_t i = 0; i < strs[0].size(); ++i) {
            char letter = strs[0][i];
            for (size_t j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[j][i] != letter) {
                    return prefix; // Return the prefix found so far
                }
            }
            prefix += letter; // Add the current letter to the prefix if all strings matched
        }
        return prefix; // Return the full prefix if the loop completes
    }
};