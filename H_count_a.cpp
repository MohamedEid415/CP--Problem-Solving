#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    str s; cin >> s;
    vec<uint> view(size(s) ,0);
    for (int i = 0; i < size(s); i++)
    {
        if(s[i] == 'a'){
            view[i] = 1;
        }
    }
    
    
    uint q; cin >> q;
    vec<uint> pre(size(s), 0);
        pre[0] = view[0];

    for (int i = 1; i < size(s); i++)
    {
        pre[i] = view[i] + pre[i-1];
    }
    

    while (q--)
    {
        uint l{0},r{0} ; cin >> l >> r;
        l--; r--;
        if(l == 0) {cout << pre[r]<<endl;}else{
        cout << pre[r] - pre[l-1] <<endl;}
        
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}