class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(char ch:s){
          mpp[ch]++;
        }
        sort(s.begin(),s.end(),[&](char a,char b){
            if(mpp[a]==mpp[b]){
                return a>b;
            }
            return mpp[a]>mpp[b];
        });
       
        return s;
    }
};