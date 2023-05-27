class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sol = INT_MIN;
        for (int i = 0; i < accounts.size(); i++)
        {
            int l = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                l += accounts[i][j];
            }
            sol = max(sol, l);
        }
        return sol;
    }
};
