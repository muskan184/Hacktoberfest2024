#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int maxSum = INT_MIN, currentSum = 0;

    for (int num : nums) {
        currentSum = max(num, currentSum + num);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArraySum(nums);
    cout << "Maximum subarray sum is " << result << endl;
    return 0;
}
