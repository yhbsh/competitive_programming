class Solution
{
public:
    //     int add_digits(int n) {
    //         int ans = 0;
    //         int k;
    //         while (n != 0) {
    //             k = n % 10;
    //             ans += k;
    //             n /= 10;
    //         }

    //         return ans;
    //     }

    int addDigits(int n)
    {

        //         while ((n / 10) != 0) {
        //             n = add_digits(n);
        //         }

        //         return n;
        if (n == 0)
            return 0;

        return (n % 9 != 0 ? n % 9 : 9);
    }
};