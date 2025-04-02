#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //
    str s = "";
    cin >> s;
    uint len{0}, count = 1;
    uint sum[s.size()];
    sum[0] = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            sum[count] = sum[count - 1] + 1;
            if (sum[count - 1] > sum[count])
            {
                len += 2;
            }
            count++;
        }
        else
        {
            sum[count] = sum[count - 1] - 1;
            if (sum[count - 1] > sum[count])
            {
                len += 2;
                count++;
            }
        }
    }
    cout << len << endl;

    return 0;
}

// vec<pair<uint, uint>> arr(n);
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i].first;
//     arr[i].second = i + 1;
// }
// uint q{0};
// cin >> q;
// while (q--)
// {
//     uint x;
//     cin >> x;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (x >= arr[i].first)
//         {
//             cout << arr[i].second << endl;
//             break;
//         }
//     }
//     if (x < arr[0].first)
//     {
//         cout << 0 << endl;
//     }
// }