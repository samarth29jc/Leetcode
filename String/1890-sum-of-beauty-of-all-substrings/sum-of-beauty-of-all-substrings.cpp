class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            map<char,int>mpp;
           
            for(int j=i;j<n;j++){
                 int minn=INT_MAX;
                 int maxx=INT_MIN;
                 mpp[s[j]]++;
                 for(auto it:mpp){
               maxx=max(maxx,it.second);
                minn=min(minn,it.second);
               }
                res+=maxx-minn;
                }      
            
        }
     return res;
    }
};