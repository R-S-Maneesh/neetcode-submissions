class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> temp;
        for(auto str:strs){
            vector<int> v(26,0);
            for(char i:str){
                v[i-'a']++;
            }
            string j=to_string(v[0]);
            for(int i=1;i<26;i++){
                j=j+','+to_string(v[i]);
            }
            temp[j].push_back(str);
        }
        for(auto& it:temp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
