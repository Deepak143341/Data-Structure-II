class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ansind=0;
        int count=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[ansind]==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                ansind=i;
                count=1;
            }
        }
        return nums[ansind];
    }
};