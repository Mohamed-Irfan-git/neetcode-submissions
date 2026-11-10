class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        priority_queue<pair<int,int>> pq;
        vector<int>ans;

        for(auto &val : nums){
            freq[val]++;
        }

        for (auto& [key, value] : freq) {
            pq.push({value, key});
        }
        
        while(!pq.empty() && k > 0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;

        }

        return ans;

    }
};
