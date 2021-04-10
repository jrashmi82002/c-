#include <bits/stdc++.h>
using namespace std;

// int maxfun(ll int A[1000000],ll int n)
// {
//   ll int res = 0, mid=0;
//     sort(A, A+n);
//     for(int i=1;i<n-1;i++)
//     {
//         res = abs(A[n-1]-A[i] ) + abs(A[i]-A[0] ) ;
//         mid = max(mid, res);
//     }
//     return (mid + abs(A[n-1] -  A[0]));
// }

// int maxfun(ll int A[1000000], int n)
// {
//   ll int res = 0, mid=0;
//     sort(A, A+n);

//     if(n%2!=0)
//      mid = n/2;
//     else
//     {
//         if(abs(A[n-1]-A[n/2] ) + abs(A[n/2]-A[0] ) >= abs(A[n-1]-A[(n/2)-1] ) + abs(A[(n/2)-1]-A[0] ))
//          mid = n/2;
//         else
//          mid =( n/2)-1;
//     }
//     res =  abs( A[0]-A[n-1] ) + abs(A[n-1]-A[mid] ) + abs(A[mid]-A[0] );
//     return res;
// }

// int maxfun(int A[1000000], int n)
// {
//     int res, sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1; j<n;j++)
//         {
//             for(int k=j+1;k<n;k++)
//             {
//                  res = abs(A[i]-A[j] ) + abs(A[j]-A[k] ) + abs( A[k]-A[i] );
//                  sum = max(sum,res);
//             }
//         }
//     }
//     return sum;
// }
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, A[100000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
    return 0;
}
