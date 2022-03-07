#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        vector<int> a(n);
        forn(i, n)
            cin >> a[i];
        if (a[0] != n && a[n - 1] != n)
            cout << -1 << endl;
        else {
            for (int i = n - 1; i >= 0; i--)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}