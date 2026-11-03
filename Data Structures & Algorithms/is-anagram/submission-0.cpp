class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char ,int> muu;
        unordered_map<char ,int> mpp;
        int i=0;
        while(i<s.size()){
            muu[s[i]]++;
            mpp[t[i]]++;
            i++;
        }
        return muu == mpp;
        return false;
    }
};

