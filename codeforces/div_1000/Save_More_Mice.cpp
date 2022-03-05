#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;


void testcase() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> a(k);

    for(int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }


    sort(a.rbegin(), a.rend());


    int ans = 0;
    int cat_index = 0;
    int mouse_index = a[0];
    int b = 1;


    while(b < k && cat_index < mouse_index) {
        ans++;
        cat_index += (n - mouse_index);
        mouse_index = a[b++];

    }

    printf("%d\n", ans);


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