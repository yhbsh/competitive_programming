#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
 
using namespace std;
 
void testcase() {
 
    int n, k;
    cin >> n >> k;
 
    // one of them is one
    if (n == 1 && k == 1) {
        printf("YES\n");
        printf("1\n");
        return;
    } 
    if (k != 1 && n == 1) {
        printf("NO\n");
        return;
    } 
    if (n != 1 && k == 1) {
        printf("YES\n");
        for(int i = 1; i <= n; ++i) {
            printf("%d\n", i);
        }
        return;
    }
 
    // both n > 1 and k > 1
 
    // printf("?\n");
 
    if (n % 2 == 0) {
        printf("YES\n");
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for(int j = 0; j < k; j++) {
                    printf("%d ", i * k + 2 * j + 1);
                }
            } else {
                for (int j = 1; j <= k; ++j) {
                    printf("%d ", (i - 1) * k + 2 * j);
                }
            }
            printf("\n");
        }
    } else {
        printf("NO\n");
    }
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