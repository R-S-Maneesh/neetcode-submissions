class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>>temp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& [key,value]:mp){
            temp.push_back({value,key});
        }
        sort(temp.begin(),temp.end(),greater<pair<int,int>>());       
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
