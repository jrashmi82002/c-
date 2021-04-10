#include <bits/stdc++.h>
using namespace std;
main(int argc, char const *argv[])
{
    int N, a[100000];
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    int size = 0;
    for (int i = 0; i < N; i++)
    {
        int x, d, z, n = 1, s = 1;
        for (int y = i + 1; y < N; y++)
        {
            d = a[i] - a[y];
            if (d == -1)
                n += 1;
            if (d == 0)
            {
                n += 1;
                s += 1;
            }
            if (d == 1)
                s += 1;
            z = max(n, s);
            size = max(size, z);
        }
    }
    cout << size;
    getchar();
    return 0;
}
