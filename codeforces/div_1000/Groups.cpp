#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

bool nm(vector<int> a, vector<int> b) {
    for(int i = 0; i < 5; i++) {
        if (a[i] == b[i] && a[i] == 1) {
            return false;
        }
    }

    return true;
}


void testcase() {
    int n;
    scanf("%d", &n);
    vector<vector<int>> a(n, vector<int>(5));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int cnta;
    int cntb;
    int cntn;


    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; j++) {
            if (i != j) {
                cnta = 0;
                cntb = 0;
                cntn = 0;
                for(int st = 0; st < n; st++) {
                    if (a[st][i] == 1) {
                        cnta++;
                    }
                    if (a[st][j] == 1) {
                        cntb++;
                    }
                    if (a[st][i] == 0 && a[st][j] == 0) {
                        cntn++;
                    }
                }

                if ((cnta >= n / 2) && (cntb >= n / 2) && (cntn == 0)) {
                    // printf("%d %d\n", cnta, cntb);
                    printf("YES\n");
                    return;
                }
                
            }
        }
    }
    // printf("%d %d\n", cnta, cntb);
    printf("NO\n");

}

int main()
{
    
    fastread();
    int T;
    scanf("%d", &T);

    while(T--) {
        testcase();
    }

    return 0;
}