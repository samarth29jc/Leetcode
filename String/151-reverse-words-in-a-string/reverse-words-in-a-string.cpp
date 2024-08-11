class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string result;
        string word;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    if (!result.empty()) {
                        result = ' ' + result;
                    }
                    result = word + result;
                    word.clear();
                }
            } else {
                word.push_back(s[i]);
            }
        }

        // Add the last word to the result
        if (!word.empty()) {
            if (!result.empty()) {
                result = ' ' + result;
            }
            result = word + result;
        }

        return result;
    }
};
