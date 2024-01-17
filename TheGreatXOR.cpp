#include <bits/stdc++.h>

using namespace std;

// Complete the theGreatXor function below.
long theGreatXor(long x) {

    long r = 0;
    long mask = 1;
    while (mask < x)
    {
        if ((mask & x) == 0)
            r += mask;
        mask <<= 1;
    }

    return r;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        long x;
        cin >> x;

        cout << theGreatXor(x) << endl;
    }

    return 0;
}