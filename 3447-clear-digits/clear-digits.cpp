
class Solution {
public:
    std::string clearDigits(std::string s) {
        int i = 0;
        while (i < s.size()) {
            if (isdigit(s[i])) {
                s.erase(i, 1); // Remove digit
                if (i > 0 && isalpha(s[i - 1])) {  
                    s.erase(i - 1, 1); // Remove previous character if it's a letter
                    i--; // Move back since the previous character was removed
                }
            } else {
                i++;  // Only move forward if no deletion occurs
            }
        }
        return s;
    }
};


