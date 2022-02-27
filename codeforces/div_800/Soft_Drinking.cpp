#include <bits/stdc++.h>
 
 
using namespace std;

int main() {
 
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = (k * l) / nl;

    // cout << a << endl;

    int b = c * d;


    // cout << b << endl;

    int f = p / np;

    // cout << f << endl;


    a = min(a, b);

    a = min(f, a);


    cout << a / n << endl;

 
}