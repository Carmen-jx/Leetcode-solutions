/*
Find the greatest number in the arr, then compare the rest of the arr with the extraCandies added.
If value is greater than or equal to the max number, then return true, else return false.
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector <bool> arr;
        int max = 0;

        for (int i = 0; i < candies.size(); ++i){
            if (candies[i] > max) max = candies[i];
        }

        for (int i = 0; i < candies.size(); ++i){
           if((candies[i] + extraCandies) >= max) {
                arr.push_back(true);
            } else {
                arr.push_back(false);
            }
        }

        return arr;
    }
};