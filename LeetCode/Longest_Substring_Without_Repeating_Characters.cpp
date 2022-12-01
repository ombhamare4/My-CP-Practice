class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char,int> mp;
        int lenght = 0, maxLength = 0,j=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            lenght++;
            while(mp[s[i]]>1){
                mp[s[j++]]--;
                lenght--;
            }
            maxLength = max(lenght,maxLength);
        }

        return maxLength;
    }
};