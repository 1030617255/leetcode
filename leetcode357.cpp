class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0){
            return 1;
        }

        if(n == 1){
            return 10;
        }

        vector<int> dp = vector<int>(n + 1, 0);
        dp[0] = 1;
        dp[1] = 9;
        int sum = dp[0] + dp[1];
        for (int i = 2; i <= min(n, 10);i++){
            dp[i] = dp[i - 1] * (10 - (i - 1));
            sum += dp[i];
        }

        return sum;
    }
};
