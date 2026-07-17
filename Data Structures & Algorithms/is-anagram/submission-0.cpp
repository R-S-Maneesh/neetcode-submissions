class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.size()){
            return false;
        }
        unordered_map<char,int> mp1,mp2;
        for(auto it:s){
            if(mp1.count(it)){
                mp1[it]++;
            }
            else{
                mp1[it]=1;
            }
        }
        for(auto it:t){
            if(mp2.count(it)){
                mp2[it]++;
            }
            else{
                mp2[it]=1;
            }
        }
    for(auto it:mp1){
        if(mp1[it.first]!=mp2[it.first]){
            return false;
        }
    }
    return true;
    }
};
