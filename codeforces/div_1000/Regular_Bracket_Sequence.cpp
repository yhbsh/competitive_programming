#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    
    int n = s.length();

    if (n % 2 == 0 && s[0] != ')' && s[n-1] != '(') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

