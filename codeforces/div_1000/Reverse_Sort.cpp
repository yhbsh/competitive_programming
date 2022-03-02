#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
 
using namespace std;
 
 
void testcase() {
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
 
    string k = s;
 
    sort(k.begin(), k.end());
 
    if (k == s) {
        printf("0\n");
        return;
    }
    
 
    vector<int> ans;
 
    for(int i = 0; i < n; i++) {
        if (s[i] == '1') {
            for(int j = n-1; j > i; j--) {
                if (s[j] == '0') {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    swap(s[i], s[j]);
                    break;
                }
            }
        }
    }
 
    
    sort(ans.begin(), ans.end());
 
    int l = ans.size();
 
    printf("1\n");
    printf("%d ", l);
 
    for(int i = 0; i < l; i++) {
        printf("%d ", ans[i]);
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