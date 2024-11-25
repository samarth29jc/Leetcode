class Solution {
public:
    int totalBook(vector<int>& bloomDay, int x, int k){
        int flower=0;
        int cnt=0;
        for(int i=0;i<bloomDay.size();i++){
          if(bloomDay[i]<=x){
            cnt++;
          }
          else{
           flower+=cnt/k;
           cnt=0;
          }
        }
         flower+=cnt/k;
        return flower;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
    if (1LL *m * k > bloomDay.size()) return -1;

    int low=0;
    int high=*max_element(bloomDay.begin(),bloomDay.end());
    while(low<=high){
        int mid=low+(high-low)/2;
        if(totalBook(bloomDay,mid,k)>=m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    }
};