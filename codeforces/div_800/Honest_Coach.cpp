#include <bits/stdc++.h>
 
 
using namespace std;


void testcase() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    int ain = 1e9;
    int bin = 1e9;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());


    int ans = 1e3;

    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, abs(a[i] - a[i+1]));
    }

    cout << ans << endl;

}

int main() {
 
    int t;
    cin >> t;
    while(t--) {
        testcase();
    }

 
}