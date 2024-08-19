class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            map<char,int>mpp;
            multiset<int>st;
            for(int j=i;j<n;j++){
                if(mpp.find(s[j])!=mpp.end()){
                    st.erase(st.find(mpp[s[j]]));
                }
                 mpp[s[j]]++;
                 st.insert(mpp[s[j]]);
                 res+=*st.rbegin()-*st.begin();
                }      
        }
     return res;
    }
};