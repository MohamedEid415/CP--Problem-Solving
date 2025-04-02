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
    ll std_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std_arr[i];
    }
    ll pre[n];
    pre[0] = std_arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = std_arr[i] + pre[i-1]; 
    }
    
    while(q--){
        uint l{0}, r{0}; cin >> l>>r;
        l--;r--;
        if(l == 0){ cout << pre[r] <<endl;}
        else{cout << pre[r] - pre[l-1] <<endl;}
    }
    return 0;
}