
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mpp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans(mpp.size());
        int i=0;
        for(auto x:mpp){
            auto temp=x.second;
            for(auto x:temp){
                ans[i].push_back(x);                
            }
            i++;
        }
        return ans;
    }
};



