class Solution {
public:
    string encode(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs.size();i++){
            str=str+to_string(strs[i].size())+"#"+strs[i];
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;   
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int size=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,size));
            i=j+1+size;
        }
        return ans;
    }
};
