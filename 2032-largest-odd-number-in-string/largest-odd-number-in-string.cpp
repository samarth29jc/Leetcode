class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse the string from the end to find the first odd digit
        for (int i = num.size() - 1; i >= 0; --i) {
            int x = num[i] - '0'; // Convert char to int
            if (x % 2 != 0) {
                return num.substr(0, i + 1); // Return substring from start to this odd digit
            }
        }
        return ""; // Return empty string if no odd digit is found
    }
};
