class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int inv=target-nums[i];
            if(mp.count(inv) and mp[inv]!=i){
                ans.push_back(i);
                ans.push_back(mp[inv]);
                return ans;
                break;
            }
        }
    }
};
