#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    uint n{0},m{0}; cin >> n>>m;
    vec<uint> arr(n, 0);
    vec<int> freq(2*m+1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = -1*m; i <= m; i++)
    {
        if(freq[i]==0){
            cout << i<<endl;
            return 0;
        }
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}