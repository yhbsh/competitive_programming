#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


using namespace std;

void testcase() {
    string s;
    cin >> s;

    int n = s.length();
    int cnta = 0;

    for(int i = 0; i < n; i++) {
        if (s[i] == '1') cnta++;
    }

    if (cnta == n || cnta == 0) {
        cout << "YES" << endl;
        return;
    }
    bool exist_one = false;
    bool ans = true;


    for(int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            if (s[i] == '1') {
                exist_one = true;
            } else {
                if (exist_one) {
                    ans = false;
                }
            }
        }
    }

    if (ans == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    
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