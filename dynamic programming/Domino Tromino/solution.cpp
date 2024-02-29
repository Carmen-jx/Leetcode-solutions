class Solution {
public:
    int numTilings(int n) {
         int ans;
         int dp[1001];
         long long mod = 1e9 +7;

         dp[0] = 1;
         dp[1] = 2;
         dp[2] = 5;

         if (n < 4){
             return dp[n-1];
         }

         for(int i=3; i < n; i++){
            dp[i] = (2LL * dp[i - 1] + dp[i - 3]) % mod;
         }

        return dp[n-1];
    }
};