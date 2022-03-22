#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    
    partial_sum(a.begin(), a.end(), a.begin());
    partial_sum(b.begin(), b.end(), b.begin());

    int l = a[0], r = b[0];
    for(int x: a) l = max(l, x);
    for(int x: b) r = max(r, x);

    cout << max(0, l) + max(0, r) << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

/*


r = 6 -5 7 -3
pr = 6 1 8 5
b = 2 3 -4
pb = 2 5 1


v = 6 8 11 6 13 9  6
a = 6 2 3 -5 7 -4 -3

cout << 13 << endl;

r = 1 1
b = 10 -3 2 2

v = 10 11 12  9 11 13
a = 10  1  1 -3  2  2

cout << 13 << endl;


r = -1 -2 -3 -4 -5
b = -1 -2 -3 -4 -5

v =  0  0  0  0  0  0  0  0  0  0 
a = -1 -1 -2 -2 -3 -3 -4 -4 -5 -5

r = 0
b = 0

v = 0
a = 0 0


strategy: two pointers l = 0 and r = 0


*/