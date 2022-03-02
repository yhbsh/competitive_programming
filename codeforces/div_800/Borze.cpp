#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main() {
    
    string s;
    cin >> s;
    string ans = "";
 
    int n = s.length();
 
    for(int i = 0; i < n; ++i) {
        if (i != n-1 && s[i] == '-' && s[i+1] == '.') {
            ans += '1';
            i++;
        } else if (i != n-1 && s[i] == '-' && s[i+1] == '-') {
            ans += '2';
            i++;
        } else {
            ans += '0';
        }
    }
 
    // if (s[n - 1] == '.') {
    //     ans += '0';
    // }
 
    cout << ans << endl;
 
}