class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isValid(nums, mid, maxOperations)) {
                result = mid; // Update the result as we minimize the maximum bag size
                right = mid - 1; // Try for smaller sizes
            } else {
                left = mid + 1; // Increase the size
            }
        }

        return result;
    }

private:
    bool isValid(const vector<int>& nums, int maxBalls, int maxOperations) {
        int operations = 0;
        for (int balls : nums) {
            if (balls > maxBalls) {
                operations += (balls - 1) / maxBalls; // Calculate required operations for this bag
                if (operations > maxOperations) return false; // Early exit if operations exceed the limit
            }
        }
        return operations <= maxOperations;
    }
};
