class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        // Binary search for the peak
        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid is less than the next element, move to the right
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } else {
                // Otherwise, move to the left
                high = mid;
            }
        }

        // The low (or high) index will point to a peak element
        return low;
    }
};
