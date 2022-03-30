#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    int ans = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % l == 0 || i % n == 0 || i % m == 0 || i % k == 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}