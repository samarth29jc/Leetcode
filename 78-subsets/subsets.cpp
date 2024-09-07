class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subsets;
        for(int i=0;i<pow(2,nums.size());i++){
            vector<int> temp;
            for(int j=0;j<nums.size();j++){
                int x=i>>j;
                if(x&1){
                    temp.push_back(nums[j]);
                }
             
            }
            subsets.push_back(temp);
        }
        return subsets;
    }
};