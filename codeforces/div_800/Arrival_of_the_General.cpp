#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int p_min = 0, p_max = 0;

    int nin = a[0], nax = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > nax)
        {
            p_max = i;
            nax = a[i];
        }

        if (a[i] <= nin)
        {
            p_min = i;
            nin = a[i];
        }
    }
    int ans;

    if (p_min <= p_max)
    {
        ans = p_max + (n - p_min - 1) - 1;
    }

    else
    {
        ans = p_max + (n - p_min - 1);
    }

    cout << ans << endl;

    // printf("%d %d\n%d %d\n", nin, p_min, nax, p_max);
}