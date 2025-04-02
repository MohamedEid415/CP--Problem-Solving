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
    uint n{0};
    cin >> n;
    vec<uint> cost(n,0);
    vec<uint> freq(100001,0);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
        freq[cost[i]]++;
    }
    vec<uint> pre(100001,0);
    pre[0] = freq[0];
    for (int i = 1; i < 100001; i++)
    {
        pre[i] = freq[i] + pre[i-1];
    }
    uint q{0}; cin >> q;
    while(q--){
        uint x{0}; cin >> x;
        if (x > 100000){
            cout << n<< endl ;
        }else{
            cout << pre[x] << endl;
        }
    }    
    
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