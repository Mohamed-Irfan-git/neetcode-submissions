class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq1(26);
        vector<int>freq2(26);

        for(int i = 0;i<s.size();i++){
            int index = s[i] - 'a';
            freq1[index]++;
        }
        for(int i = 0;i<t.size();i++){
            int index = t[i] - 'a';
            freq2[index]++;
        }

        if(freq1 == freq2 )
            return true;
        return false;


    }
};
