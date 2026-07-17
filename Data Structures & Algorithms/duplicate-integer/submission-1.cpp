class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            if(mp.count(it)){
                return true; 
            }
            mp[it]=1;
            
        }
        return false;
    }
};