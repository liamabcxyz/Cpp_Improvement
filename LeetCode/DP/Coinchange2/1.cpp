class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> v(amount+1,0);
        v[0]=1;
        

        for(auto coin:coins)
        {
            for(int i=coin;i<amount+1;i++)
                v[i]+=v[i-coin];
        }
        return v[amount];
    }
};
