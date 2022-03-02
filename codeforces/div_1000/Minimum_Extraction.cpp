#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
 
using namespace std;
 
 
void testcase() {
 
    int n;
    cin >> n;
    vector<int> a(n);
 
 
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    if (n == 1) {
        printf("%d\n", a[0]);
        return;
    }
 
 
    sort(a.begin(), a.end());
 
    int k = 0;
    int ans = -1e9 + 5;
 
    for(int i = 0; i < n; i++) {
        a[i] -= k;
        k += a[i];
        ans = max(ans, a[i]);
    }
 
    printf("%d\n", ans);
 
    
    
 
}
 
int main()
{
    
    fastread();
    int T;
    cin >> T;
 
    while(T--) {
        testcase();
    }
 
    return 0;
}