class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        int n = nums.size();

        // 1. Sort the array
        sort(nums.begin(), nums.end());

        // 2. Fix the first element
        for(int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // 3. Two pointers
            int start = i + 1;
            int end = n - 1;

            while(start < end) {

                int sum = nums[i] + nums[start] + nums[end];

                if(sum == 0) {

                    ans.push_back({
                        nums[i],
                        nums[start],
                        nums[end]
                    });

                    // Skip duplicate values
                    while(start < end && nums[start] == nums[start + 1]) {
                        start++;
                    }

                    while(start < end && nums[end] == nums[end - 1]) {
                        end--;
                    }

                    start++;
                    end--;
                }

                else if(sum < 0) {
                    start++;
                }

                else {
                    end--;
                }
            }
        }

        return ans;
    }
};