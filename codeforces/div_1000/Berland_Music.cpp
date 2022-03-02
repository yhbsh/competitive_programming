#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
 
using namespace std;
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
void testcase() {
 
    int n;
    cin >> n;
    vector<pair<int,int>> p(n);
 
 
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }
    string s;
    cin >> s;
 
    if (n == 1) {
        printf("%d\n", p[0].first);
        return;
    }
 
    vector<bool> sorted_liked(n);
 
    int a = 0;
 
 
    for(int i = 0; i < n; i++) {
        a += s[i] - '0';
        sorted_liked[p[i].first - 1] = s[i] - '0';
    }
 
    // for(int i = 0; i < n; i++)
        // printf("%d ", sorted_liked[i] == true ? 1:0);
 
    // printf("%d\n", a);
 
 
    int cnt_liked = n - a + 1;    
    int cnt_disliked = 1;
 
 
 
 
    sort(p.begin(), p.end());
 
    // for(int i = 0; i < n; i++) {
    //     printf("%d ", p[i].second);
    // }
 
    vector<pair<int,int>> q(n);
 
    for (int i = 0; i < n; i++) {
        if (sorted_liked[i] == true) {
            // printf("?\n");
            q[i].first = cnt_liked++;
        }
        else {
            // printf("??\n");
            q[i].first = cnt_disliked++;
        }
 
        // printf("(%d,%d)\n", q[i].first, p[i].second);
        q[i].second = p[i].second;
    }
 
    sort(q.begin(), q.end(), sortbysec);
 
    for(int i = 0; i < n;  i++) {
        printf("%d ", q[i].first);
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