class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0,sum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for(int i =0;i<nums.size();i++){
            sum = sum+nums[i];
            count = count + m[sum-k];
            m[sum]++;
        }
        return count;
    }
};Subarray Sum Equals K.cpp
