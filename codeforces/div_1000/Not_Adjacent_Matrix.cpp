#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


using namespace std;


bool coprime(int a, int b) {
     
    if ( __gcd(a, b) == 1)
        return true;
    return false;
}


void testcase() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    if (n == 2) {
        cout << -1 << endl;
        return;
    }

    // some number is the smallest co_prime number with n less than n.
    int some_number = 2;

    while(!coprime(some_number, n)) some_number++;



    int x = 0;
    


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << x + 1<< " ";
            x += some_number;
            if (x >= n * n) {
                x -= n * n;
            }
        }
        cout << endl;
        if (x > n * n) {
                x -= n * n;
        }
        // cout << i << endl;
    }
        



    // for(int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {

    //     }
    // }

}

int main() {

    fast_read();

    int T;
    cin >> T;
    while (T --> 0) {
        testcase();
    }
    return 0;
}

/*
n = 6

0 4 8 


*/