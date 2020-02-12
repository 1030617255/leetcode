class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int res = 0;
        int k = 1 << (sizeof(int)*8-2); // 非负整数的最大二次幂
        while (k > 0 && (m & k) == (n & k)) {
            res |= k & m;
            k >>= 1;
        }
        return res;
    }
};

