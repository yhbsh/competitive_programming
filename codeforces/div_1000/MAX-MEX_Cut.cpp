#include <bits/stdc++.h>
 
using namespace std;
 
int solve(string s) {
    int ans = count(s.begin(), s.end(), '0');
    int n = s.size();
    bool a = false, b = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') a = true;
        if (s[i] == '1') b = true;
        if (a && b) {
            ++ans;
            a = b = false;
        }
    }
    return ans;
}

void testcase() {
    int n, ans = 0;
    string a, b;
    cin >> n >> a >> b;
    string s = "";
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            ans += 2 + solve(s);
            s = "";
        } else {
            s += a[i];
        }
    }
    cout << ans + solve(s) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T --> 0) {
        testcase();
    }
    return 0;
}