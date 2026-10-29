//Example 2 Input: nums = [0, 1] Output: 2 Constraints 1 <= nums.length <= 10^4 • All elements are distinct. • 0 <= nums[i] <= n
#include <iostream>
#include <vector>


class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        long long expectedSum = (long long)n * (n + 1) / 2;
        long long actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        return expectedSum - actualSum;
    }
};

int main() {
    Solution solution;
    std::vector<int> test1 = {3, 0, 1};
    std::cout << "Example 1 Output: " << solution.missingNumber(test1) << std::endl; // Output: 2

    std::vector<int> test2 = {0, 1};
    std::cout << "Example 2 Output: " << solution.missingNumber(test2) << std::endl; // Output: 2

    return 0;
}
