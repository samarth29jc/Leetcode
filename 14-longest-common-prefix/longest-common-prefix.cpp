class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        string a=strs[0];
        string z=strs[n-1];
        for(int i=0;i<min(a.size(),z.size());i++){
            if(a[i]!=z[i]){
                return ans;
            }
        ans.push_back(a[i]);
        }
     return ans;
    }
};