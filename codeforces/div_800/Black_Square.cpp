#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main() {
    
    vector<int> a(4);
 
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
 
    string s;
    cin >> s;
 
    int ans = 0;
 
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - '1';
        ans += a[x];
    }
 
    cout << ans << endl;
}