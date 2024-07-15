class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int cnt =0;
       int presum=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       for(int i=0;i<n;i++){
        presum+=nums[i];
        int rem=presum-k;
        cnt+=mpp[rem];
        mpp[presum]+=1;
       } 
       return cnt;
    }
};