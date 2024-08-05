class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
     map<string,int>mpp;
     int count=0;
     for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
     }
       for(const auto &it:arr){
       if(mpp[it]==1){
        count++;
         
       }
       if(count==k){
        return it;
       }
      
     }
    return "";
    }
};