class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char>vpp;
        int maxx=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
               if(find(vpp.begin(),vpp.end(),s[j])==vpp.end()){
                 vpp.push_back(s[j]);
               }
               else{
                maxx=max(maxx,static_cast<int>(vpp.size()));
                vpp.clear();
                break;
               }
            }
        }
        maxx= max(maxx, (int)vpp.size());
        return maxx;
    }
};