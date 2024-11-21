class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        // Edge cases: if the single element is at the boundaries
        if (nums.size() == 1 || nums[0] != nums[1]) return nums[0];
        if (nums[high] != nums[high - 1]) return nums[high];
        
        // Binary search for the single element
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is the single non-duplicate
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            
            // Determine the side to search
            if (mid % 2 == 0) {
                // If mid is even and matches the next element, search right
                if (nums[mid] == nums[mid + 1]) {
                    low = mid + 2;
                } else {
                    high = mid - 1;
                }
            } else {
                // If mid is odd and matches the previous element, search right
                if (nums[mid] == nums[mid - 1]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
        return -1; // This line should never be reached
    }
};
