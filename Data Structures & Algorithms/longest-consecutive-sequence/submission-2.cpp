class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> numset(nums.begin(),nums.end());
        int ans;
        for(auto it : nums){
            if(numset.find(it-1)==numset.end()){
                int len=1;
                while(numset.find(it+len)!=numset.end()){
                    len++;
                }
                ans=max(ans,len);
            }
        }
        return ans;
    }
};