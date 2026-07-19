class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pro=1;
        int zeros=0;
        bool zero=false;
        for(auto& it:nums){
            if(it==0){
                zero=true;
                zeros++;
            }
            else{   
                pro=pro*it;
            }
        }
        for(auto& it:nums){
            if(!zero){
                int a=pro/it;
                ans.push_back(a);
            }
            else{
                if(it==0){
                    if(zeros>1){
                        ans.push_back(0);
                    }
                    else{
                        ans.push_back(pro);
                    }
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};
