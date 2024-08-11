#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string result;

        // Traverse the string from the end to the beginning
        for (int i = n - 1; i >= 0; i--) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Build the result from the start to the current index
                result = num.substr(0, i + 1);
                break;  // No need to continue once we find the largest odd number substring
            }
        }

        return result;
    }
};
