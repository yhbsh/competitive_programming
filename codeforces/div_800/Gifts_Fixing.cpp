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
        ain = min(ain, a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        bin = min(bin, b[i]);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += max(a[i] - ain, b[i] - bin);
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