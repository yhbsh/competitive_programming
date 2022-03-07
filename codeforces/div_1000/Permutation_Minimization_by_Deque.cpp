#include <bits/stdc++.h>
 
using namespace std;
 
void testcase() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] << endl;
        return;
    }

    deque<int> ans;

    ans.push_back(a[0]);

    for(int i = 1; i < n; i++) {
        if (a[i] < ans[0]) {
            ans.push_front(a[i]);
        } else {
            ans.push_back(a[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        cout <<  ans[i] << " ";
    }

    cout << endl;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        testcase();
    }
}