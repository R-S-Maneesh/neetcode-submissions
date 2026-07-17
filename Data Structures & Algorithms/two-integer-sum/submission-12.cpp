class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int inv=target-nums[i];
            if(mp.count(inv)){
                ans.push_back(mp[inv]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
