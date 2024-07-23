class Solution {
public:
    string frequencySort(string s) {
          map<char,int>mp;
        for(auto i : s) mp[i]++;
        sort(s.begin() , s.end() , [&](char a, char b){
            if(mp[a] == mp[b]){
                return a<b;
            }
            return mp[a]>mp[b];
        });
        return s;
    }
};