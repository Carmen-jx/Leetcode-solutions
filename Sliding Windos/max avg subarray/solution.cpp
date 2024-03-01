class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double temp =0;

        if (nums.size() < k) {
            return 0;
        }

        for (int i=0; i< k; i++){
            temp += nums[i];
        }
        sum= temp;

        for (int i = 0; i< nums.size()-k; i++){
            temp = temp -nums[i] + nums[i + k];
            sum = max(sum, temp);
        }

        return sum/k;

    }
};