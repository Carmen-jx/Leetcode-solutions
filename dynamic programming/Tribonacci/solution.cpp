/*
We know that T0 = 0, T1 = 1 and T2 =1 in the tribonacci sequence.
To know the next value, I made a loop starting from T3, where the answer will be the sum of the last three values.
Each loop will update the next three values of the sequence until nth time.
*/

class Solution {
public:
    int tribonacci(int n) {
        int arr [] = {0,1,1};
        int ans;

        if (n == 0){
            return 0;
        }
        if (n == 1 || n ==2 ){
            return 1;
        }

        for (int i=3; i<= n; i++){
            ans = arr[0] + arr[1] + arr[2];
            arr[0] = arr[1];
            arr[1] = arr[2];
            arr[2] = ans;
        }

        return ans;
    }
};