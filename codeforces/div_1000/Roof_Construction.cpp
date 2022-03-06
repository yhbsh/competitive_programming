#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x & (x - 1)));
}


void testcase() {
    int n;
    cin >> n;

    int k = n - 1;

    while(!isPowerOfTwo(k)) {
        k--;
    }

    int l = k;
    

    // now k is the nearest power of two to smaller than n

    vector<int> a;

    while(l != 0) {
        a.push_back(--l);
    }

    while(k <= n - 1) {
        a.push_back(k++);
    }

    for(int x : a) {
        printf("%d ", x);
    }

    printf("\n");


}


int main() {

    int T;
    cin >> T;

    while(T--) {
        testcase();
    }


    return 0;
}