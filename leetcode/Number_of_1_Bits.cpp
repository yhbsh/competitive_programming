class Solution {
public:
    int hammingWeight(uint32_t n) {
        int w = 0;
        while(n) {
            w += n % 2;
            n /= 2;
        }
        return w;
    }
};