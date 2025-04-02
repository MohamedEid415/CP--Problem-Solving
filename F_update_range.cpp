#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    uint n{0},q{0}; cin >> n >> q;
    vec<ll> arr (n , 0);
    for(int i = 0; i < n; i++){cin >> arr[i];}
    vec<ll> add (n , 0);
    
    while (q--)
    {
        ll l{0},r{0},val{0}; cin >> l>> r>> val;
        l--;r--;
        if(r == n-1){
            add[l] += val;
        }else{
                add[l] += val;
                add[r+1] -=val;
        }
    }
    for (int i = 1; i < n; i++)
    {
        add[i] +=add[i-1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] += add[i];
        cout << arr[i]<<" ";
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}