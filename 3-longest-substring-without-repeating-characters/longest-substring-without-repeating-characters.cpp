class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int len=0;
        for(int i=0;i<s.size();i++){
            string z="";
           
        
            for(int j=i;j<s.size();j++){
                 z=z+s[j];
              if(z.find(s[j+1])!=string::npos||z.size()==s.size()){
                len= max(len,static_cast<int>(z.size()));
               
               break;
              }
                     len= max(len,static_cast<int>(z.size()));

            }
        }
               
        return len;
    }
};