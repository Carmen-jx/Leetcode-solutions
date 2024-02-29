class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int arr[2] {0};
        int ans;

        for (int i = 2; i <= n ; i++){
            ans = std::min(arr[0] + cost[i-2], arr[1] + cost[i-1]);
            arr[0] = arr[1];
            arr[1] = ans;
        }

        return ans;

    }
};