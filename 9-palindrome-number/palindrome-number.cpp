class Solution {
public:
    bool isPalindrome(int x) {
    long long original=x;
    long long rev=0;
        while(x>0){
          long long z=x%10;
          rev=(rev*10)+z;
          x=x/10;
        }
        if(rev==original){
            return true;
        }
        return false;
    }
};