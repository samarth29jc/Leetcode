class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mpp;
        string temp="";
        string sorted="";
        int pos;
         for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                pos = s[i] - '0'; // Convert the character to an integer
                mpp[pos] = temp;  // Store the word in the map
                temp = "";        // Reset the temp string for the next word
                i++;              // Skip the space after the digit
            } else if (s[i] != ' ') {
                temp.push_back(s[i]);
            }
        }

      
        for (auto &it : mpp) {
            sorted += it.second + " ";
        }
        if (!sorted.empty()) {
            sorted.pop_back(); // Remove the trailing space
        }
        
        return sorted;
    }
};