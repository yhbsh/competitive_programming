#include <bits/stdc++.h>

#define fast_read() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

using namespace std;

void testcase()
{
    long long n, k;
    cin >> n >> k;

    long long a = (n + k - 1) / k;
    k *= a;

    cout << (k + n - 1) / n << endl;
}
int main()
{

    fast_read();

    int T;
    cin >> T;
    while (T-- > 0)
    {
        testcase();
    }
    return 0;
}

/*
we have a and b

we can do:
1- a = a / b
2- b = b + 1

a = 1337 b = 1
1- b = 2 a = 1337
2- b = 3 a = 1337
3- b = 4 a = 1337
4- b = 5 a = 1337
3- repeat 7 times: a = a / b



min number of operation to make a = 0

when should we choose 2 and when should we choose 1 !?


k = 1
n = 7

1 1 1 1 1 1 1


*/