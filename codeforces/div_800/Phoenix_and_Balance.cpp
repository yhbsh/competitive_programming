#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
 
        cout << (1 << (n / 2 + 1)) - 2 << endl;
  
 
        // for (int i = 1; i <= n/2 + 1; i++) {
        //     int s = (1 << i) * ((1 << n/2) - 1);
 
 
        //     printf("ans=%-10d abs(2*s-sum)=%d\n", ans, abs(2*s - sum));
        //     // cout << 2*s-sum << endl;
        //     ans = min(ans, abs(2*s - sum));
 
        // }
 
        // // printf("\n\n");
 
        // cout << ans << endl;
 
 
    }
 
}