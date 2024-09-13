class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
       
        int n = arr.size();
        vector<int> prefixXor(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixXor[i + 1] = prefixXor[i] ^ arr[i];
        }

        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            ans.push_back(prefixXor[right + 1] ^ prefixXor[left]);
        }
        return ans;
    }
};