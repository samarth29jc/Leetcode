class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
       map<int, string> mapping;
          int n = names.size();
        for (int i = 0; i < n; ++i) {
            mapping[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end());
        for (int i = 0; i < n; ++i) {
            names[i] = mapping[heights[n-i-1]];
        }

        return names;
    }
};