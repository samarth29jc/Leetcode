class Solution {
public:
    vector<int>coulumn(int row){
        vector<int>col;
        int res=1;
        col.push_back(1);
        for(int i=1;i<row;i++){
         res=res*(row-i);
         res=res/i;
         col.push_back(res);
        }
        return col;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
           ans.push_back(coulumn(i));
        }
        return ans;
    }
};