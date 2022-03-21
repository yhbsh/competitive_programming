#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    if (a.length() < b.length()) swap(a, b);
    int lena = a.length();
    int lenb = b.length();

    for(int i = 0; i < lena; i++) {
        if (a[i] != b[i % lenb]) {
            cout << -1 << endl;
            return;
        }
    }

    string s1 = "", s2 = "";

    if (lena % lenb != 0) {
        int lcm = (lena * lenb) / __gcd(lena, lenb);
        for(int i = 0; i < lcm; i++) {
            s1 += a[i % lena];
            s2 += b[i % lenb];
        }
        if (s1 != s2) {
            cout << -1 << endl;    
            return;
        } else {
            cout << s1 << endl;
        }
        return;
    } else {
        if (lena > lenb) cout << a << endl;
        else cout << b << endl;
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

/*

3
baba
ba

aa
aaa

aba
ab

*/