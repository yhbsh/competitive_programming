#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


using namespace std;

void testcase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }

    int res = 0;
    vector<int> cnt(3);
    for (int x = 0; x <= 2; x++) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 3 == x) {
                cnt[x]++;
            }
        }
    }
    
    while (*min_element(cnt.begin(), cnt.end()) != n / 3) {
        for (int i = 0; i < 3; i++) {
            if (cnt[i] > n / 3) {
                res++;
                cnt[i]--;
                cnt[(i + 1) % 3]++;
            }
        }
    }
    cout << res << endl;

}
int main() {

    fast_read();

    int T;
    cin >> T;
    while (T --> 0) {
        testcase();
    }
    return 0;
}