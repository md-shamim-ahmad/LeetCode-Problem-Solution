class Solution {
    const int MOD = 1000000007;
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,long int> dp;
        int len=arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0;i<len;i++){
            dp[arr[i]] = 1;
            for(int j=0; j<i; j++){
                if(arr[i]%arr[j]==0 && dp.find((arr[i]/arr[j]))!=dp.end()){
                    dp[arr[i]] += (dp[arr[j]] * dp[(arr[i]/arr[j])]) % MOD;
                    dp[arr[i]] %= MOD;
                }
            }
        }
        int ans=0;
        for(auto i : dp){
            ans += i.second;
            ans %= MOD;
        }
        return ans;
    }
};