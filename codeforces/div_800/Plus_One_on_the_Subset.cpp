#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        int nax = -1e9, nin = 1e9;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            nax = max(nax, a[i]);
            nin = min(nin, a[i]);
        }
 
        cout << nax-nin << endl;
 
    }
 
}