class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            int l = i+1;
            int h = nums.size()-1;
             int x = nums[i];
            
            while(l < h){
                if(x + nums[l] + nums[h] == 0){
                    res.push_back(vector<int>{x,nums[l],nums[h]});
                    
                    while(l < h && nums[l] == nums[l+1])
                        l++;
                    while(l < h && nums[h] == nums[h-1])
                        h--;
                    
                    l++;
                    h--;
                }
                else if(x + nums[l] + nums[h] < 0)
                    l++;
                
                else
                    h--;
            }
        }
        return res;
    }
};