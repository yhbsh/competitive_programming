#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
 
using namespace std;
 
const int INF = 1e6 + 5;
 
 
void testcase() {
 
    int n;
    cin >> n;
    vector<int> a(n);
    int y = INF;
 
 
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        y = min(y, a[i]);
    }
 
    int cnt = 0;
 
    for(int i = 0; i < n; i++) {
        if (a[i] != y && cnt < n/2) {
            printf("%d %d\n", a[i], y);
            cnt++;
        }
    }
 
 
 
    
 
    printf("\n");
    
 
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