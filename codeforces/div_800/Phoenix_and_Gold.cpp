#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

using namespace std;

void testcase()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = 0;

    bool can = true;

    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if (i != n - 1 && s == x)
        {
            swap(a[i], a[i + 1]);
        }
        else if (i == n - 1 && s == x)
        {
            can = false;
        }
    }

    if (can == true)
    {
        cout << "YES" << endl;
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{

    fast_read();

    int T;
    cin >> T;
    while (T-- > 0)
    {
        testcase();
    }
    return 0;
}

/*
we have a and b

we can do:
1- a = a / b
2- b = b + 1

a = 1337 b = 1
1- b = 2 a = 1337
2- b = 3 a = 1337
3- b = 4 a = 1337
4- b = 5 a = 1337
3- repeat 7 times: a = a / b



min number of operation to make a = 0

when should we choose 2 and when should we choose 1 !?

*/