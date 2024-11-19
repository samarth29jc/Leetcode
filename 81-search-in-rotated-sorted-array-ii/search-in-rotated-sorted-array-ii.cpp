class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
         int mid=low+(high-low)/2;
         if(nums[mid]==target){
           return true;
         }
          if (nums[mid] == nums[low] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue; // Skip further processing for this iteration
            }
         if(nums[low]<=nums[mid]){
           if(target<=nums[mid] && nums[low]<=target){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
         }
         else {  // Right half is sorted
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;   // Target in the right half
                } else {
                    high = mid - 1;  // Target in the left half
                }
        }}
        return false;
    }
};