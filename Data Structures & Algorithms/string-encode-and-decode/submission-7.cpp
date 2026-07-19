class Solution {
public:
    string encode(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs.size();i++){
            str=str+strs[i]+"~";
        }
        return str;
    }

    vector<string> decode(string s) {
        string a="";
        vector<string> ans;
        for(auto ch:s){
            if(ch=='~'){
                ans.push_back(a);
                a.clear();
                continue;
            }
            a=a+ch;
        }
        return ans;
    }
};
