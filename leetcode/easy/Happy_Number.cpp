class Solution
{
public:
    int sqsum(int num)
    {
        int rem, sum = 0;
        while (num > 0)
        {
            rem = num % 10;
            sum += (rem * rem);
            num = num / 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        unordered_map<int, int> mp;
        int m;
        while (n != 1)
        {
            m = sqsum(n);
            if (m == 1)
                return true;
            else if (mp.find(m) != mp.end())
                return false;
            else
            {
                mp.insert({m, 1});
                n = m;
            }
        }
        return true;
    }
};