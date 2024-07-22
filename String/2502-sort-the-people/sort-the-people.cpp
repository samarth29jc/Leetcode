class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
       unordered_map<int, string> mapping;
          int n = names.size();
        for (int i = 0; i < n; ++i) {
            mapping[heights[i]] = names[i];
        }

        sort(heights.rbegin(), heights.rend());

        for (int i = 0; i < n; ++i) {
            names[i] = mapping[heights[i]];
        }

        return names;
    }
};