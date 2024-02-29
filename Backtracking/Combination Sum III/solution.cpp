/*
This solution uses backtracking to determine all possible combos of K numbers from 1-9 that adds up to the sum.
It uses the recursive function combo, with parameters: i for the possible number, sum = n, sz= k, and temp a temporary vectory storing the combination.
Base cases:
    If the sum is 0 or the size of the temporary vector  equals to K, then the valid combination is found and returned to stop the function.
    If condition of the parameters exceed the constraint then the function will be backtracked to its previous state and will exclude the value i from the temporary combination

If the above base cases aren't met, then we call the function recursively as follows:
    -include i in the temporary combination
    -recursively call the function with updated i, i + 1, this tests the next value, and reduce the sum by i
        ex. if n=7 and k=3, i= 1, then temp will be {1,_,_} before the recursive call.
            now we will call with i = 1 + 1, and sum = 7 - 1. This will let us explore what combo will add up the remaining sum of 6.
        
        This process will repeat until the base cases are met and valid combination is found

*/

class Solution {
    vector <vector<int>> ans;
  
    void combo(int i, int sum, int sz, vector <int> temp){
        if( sum == 0 && temp.size() == sz){
            ans.emplace_back(temp);
            return;
        }
        if ( i > 9 || i > sum || temp.size() >= sz){
            return;
        }
        temp.emplace_back(i);
        combo(i + 1, sum -i, sz, temp);
        
        temp.pop_back();
        combo(i +1, sum, sz, temp);

    };


public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <int> temp;
        combo(1, n, k, temp);
        return ans;        
    }
};