#include <bits/stdc++.h>
 
 
using namespace std;
 
 
 
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n%3 == 2) {
            printf("%d %d\n", n/3, n/3 + 1);
        } else {
            printf("%d %d\n", (n%3) + n/3, n/3);
        }
    
    }
}