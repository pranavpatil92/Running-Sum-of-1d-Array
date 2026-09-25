class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxSum = 0;
        long long windowSum = 0;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            windowSum += nums[i];
            freq[nums[i]]++;

            if (i >= k) {
                int outgoing = nums[i - k];
                windowSum -= outgoing;
                freq[outgoing]--;
                if (freq[outgoing] == 0) {
                    freq.erase(outgoing);
                }
            }

            if (i >= k - 1) {
                if ((int)freq.size() == k) {
                    maxSum = max(maxSum, windowSum);
                }
            }
        }

        return maxSum;
    }
};