class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int a[11];
      a[5]=0;
      a[10]=0;
      for (int i=0; i<bills.size(); i++){
        if (bills[i]==5){
          a[5]++;
        }else if (bills[i]==10){
          if (a[5]==0) return false;
          else {a[5]--; a[10]++;}
        }else{
          if (a[10]>0 && a[5]>0){
            a[10]--; a[5]--;
          }else if(a[5]>=3){
            a[5]-=3;
          } else 
          return false;
        }
      }
      return true;
    }
};