class Solution {
public:
    int minBitFlips(int start, int goal) {
        int final=start^goal;
        int cnt=0;
        while(final != 0){
            if(final&1){
                cnt++;
            }
            final= final>>1;
        }
        return cnt;
    }
};