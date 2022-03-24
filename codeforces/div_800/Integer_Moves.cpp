#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }

    int dis = x * x + y * y;

    if (ceil((double)sqrt(dis)) == floor((double)sqrt(dis)))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
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
