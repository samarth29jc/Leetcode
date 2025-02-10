class Solution {
public:
    string clearDigits(string s) {
        int i=0;
       while(i<s.size()) {
       if( i>0 && isdigit(s[i])){
            s.erase(i,1);
            if(isalpha(s[i-1])){
                s.erase(i-1,1);
                i--;
            }
        }
       else{i++;}
       }
       return s;
    }
};