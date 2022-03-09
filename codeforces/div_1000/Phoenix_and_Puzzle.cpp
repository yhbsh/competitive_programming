#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


using namespace std;

bool perfect_square(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void testcase() {
    int n;
    cin >> n;

    // n must be 2 or even perfect square!
    if ((n / 2 != 0 && n % 2 == 0 && perfect_square(n / 2)) || (n / 4 != 0 && n % 4 == 0 && perfect_square(n / 4))) {
        cout << "YES\n"; 
    } else {
        cout << "NO\n";
    }

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

