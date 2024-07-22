class Solution {
public:
    int compress(vector<char>& chars) {
         int n = chars.size();
        if (n == 0) return 0;

        int index = 0;
        int i = 0;

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            // Count occurrences of the current character
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }

            // Write the character to the new index
            chars[index++] = currentChar;

            // Write the count if it's more than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
        }

        // The new length of the compressed array
        return index;

    }
};