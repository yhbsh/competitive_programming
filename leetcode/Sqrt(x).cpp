class Solution {
public:
    int mySqrt(int x) 
    {
        long long int i = 0;
        int l = 0, h = x;
        long long int m;
        bool stop = false;
        while(l <= h && !stop)
        {
            m = l + (h - l) / 2;
            if (m * m <= x && (m+1) * (m+1) > x)
                stop = true;
            else if (m * m > x)
                h = m - 1;
            else
                l = m + 1;
        }
        return m;
    }
};