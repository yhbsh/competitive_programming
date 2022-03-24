#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, b, x, y;
    cin >> n >> b >> x >> y;
    n++;
    long long cur = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += cur;
        if (cur + x <= b)
            cur += x;
        else
            cur -= y;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
