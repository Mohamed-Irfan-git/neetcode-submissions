class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mp;
        int n = strs.size();

        for (int i =0;i<n;i++){
            vector<int> freq(26,0);
            for(char ch : strs[i]){
                int index = ch -'a';
                freq[index]++;
            }

            mp[freq].push_back(strs[i]);
            
        }

        for (auto &[key,value]:mp){
            ans.push_back(value);
        }

        return ans;
    }
};
