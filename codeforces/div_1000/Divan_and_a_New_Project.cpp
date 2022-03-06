#include <bits/stdc++.h>

using namespace std;

#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool cm(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}


void testcase() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.rbegin(), a.rend());

    vector<long long> ans(n + 1, 0);

    long long total_time = 0;
    long long l = -1;
    long long r = 1;

    for(int i = 0; i < n; i++) {
        if (i & 1) {
            total_time += (a[i].first * abs(l));
            ans[a[i].second] = l--;
        } else {
            total_time += (a[i].first * r);
            ans[a[i].second] = r++;
        }
    }

    cout << total_time * 2 << endl;

    for(auto &i : ans) {
        cout << i << " ";
    }
}


int main() {
    FIO;
    int T = 1;
    cin >> T;

    while(T--) {
        testcase();
        cout << endl;
    }


    return 0;
}