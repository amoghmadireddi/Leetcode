class Solution {
public:
    int minStickers(vector<string>& stickers, string target) {
        int m = stickers.size();
        vector<vector<int>> mp(m, vector<int>(26, 0));
        unordered_map<string, int> dp;
        // count characters a-z for each sticker 
        for (int i = 0; i < m; i++) 
            for (char c:stickers[i]) mp[i][c-'a']++;
        dp[""] = 0;
        return helper(dp, mp, target);
    }
private:
    int helper(unordered_map<string, int>& dp, vector<vector<int>>& mp, string target) {
        if (dp.count(target)){
            return dp[target];
        }
        int ans = INT_MAX;
        int n = mp.size();
        vector<int> tar(26, 0);
        for (char c:target){
            tar[c-'a']++;
        }
        // try every sticker
        for (int i = 0; i < n; i++) {
            // optimization
            if (mp[i][target[0]-'a'] == 0){
                continue; 
            }
            string s;
            // apply a sticker on every character a-z
            for (int j = 0; j < 26; j++) 
                if (tar[j]-mp[i][j] > 0){
                    s += string(tar[j]-mp[i][j], 'a'+j);
                }
            int tmp = helper(dp, mp, s);
            if (tmp!= -1){
                 ans = min(ans, 1+tmp);
            }
        }
        dp[target] = ans == INT_MAX? -1:ans;
        return dp[target];
    }
};