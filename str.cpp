#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool calc(ll h, ll m, ll h1, ll m1, ll h2, ll m2)
{
    int s, e;
    int hour[24] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int i = 0; i < 24; i++)
    {
        if (hour[i] == h1)
            s = i;
        if (hour[i] == h2)
            e = i;
    }
    if (s < e)
    {
        bool flag = false, ans = false;
        for (int i = s; i <= e; i++)
        {
            if (hour[i] == h)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            if (h == h1 && m < m1 || h == h2 && m > m2)
                ans = false;
            else
                ans = true;
            return ans;
        }
        else
            return false;
    }
    else if (s == e)
    {
        if (m1 > m2 && m > m2 && m < m1)
            return false;
        if (m >= m1 && m <= m2)
            if (h == h1)
                return true;
            else
                return false;
    }
    else if (s > e)
    {
        bool flag = false, ans = false;
        int a = 24;
        for (int i = s; i < m; i++)
        {
            if (i == 23)
            {
                i = 0;
                a = e + 1;
            }
            if (hour[i] == h)
            {
                flag = true;
                break;
            }
            if (flag == true)
            {
                if (h == h1 && m < m1 || h == h2 && m > m2)
                {
                    ans = false;
                }
                else
                    ans = true;
                return ans;
            }
            else
                return false;
        }
    }
    return false;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, h, m;
        char s[12], a;
        cin >> h >> a >> m;
        if (strcmp(s, "AM") == 0 && h != 12)
            h += 12;
        if (strcmp(s, "PM") == 0 && h == 12)
            h += 12;
        cin >> s;
        cin >> n;
        while (n--)
        {
            ll h1, m1, h2, m2;
            char s1[12], s2[12];
            cin >> h1 >> a >> m1;
            cin >> s1;
            cin >> h2 >> a >> m2;
            cin >> s2;
            if (strcmp(s, "AM") == 0 && h1 != 12)
                h1 += 12;
            if (strcmp(s, "PM") == 0 && h1 == 12)
                h1 += 12;
            if (strcmp(s, "AM") == 0 && h2 != 12)
                h2 += 12;
            if (strcmp(s, "PM") == 0 && h2 == 12)
                h2 += 12;
            cout << calc(h, m, h1, m1, h2, m2);
        }
        cout << "\n";
    }
    return 0;
}