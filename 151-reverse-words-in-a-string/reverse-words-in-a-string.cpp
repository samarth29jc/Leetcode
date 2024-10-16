class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
      for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(!word.empty()){
                if(!ans.empty()){
                 ans=' '+ans;
                }
                ans=word+ans;
                word.clear();
            }
            
        }
        else{
            word.push_back(s[i]);
        }
      } 
         if (!word.empty()) {
            if (!ans.empty()) {
                ans = ' ' + ans;
            }
            ans = word + ans;
        }
      return ans; 
    }
};