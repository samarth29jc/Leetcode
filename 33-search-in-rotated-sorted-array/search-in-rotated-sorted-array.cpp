class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        
            while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if the mid element is the target
            if (nums[mid] == target) {
                return mid;
            }
            
            // Determine which half is sorted
            if (nums[low] <= nums[mid]) {  // Left half is sorted
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;  // Target is in the left half
                } else {
                    low = mid + 1;   // Target is in the right half
                }
            } else {  // Right half is sorted
                if (target > nums[mid] && target <= nums[high]) {
                    low = mid + 1;   // Target is in the right half
                } else {
                    high = mid - 1;  // Target is in the left half
                }
            }
        }
        
        return -1;
    }
};