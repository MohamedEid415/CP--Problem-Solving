#include <bits/stdc++.h>
#include <string>
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

    uint n, q; cin >> n >> q;
    str s;cin >> s;
    
    while (q--) {
        str query;
        uint x;
        cin >> query >> x;

        if (query == "next_permutation") {
            for (int i = 0; i < x; i++) {
                if (!next_permutation(s.begin(), s.end())) {
                    sort(s.begin(), s.end());
                }
            }
        } else if (query == "prev_permutation") {
            for (int i = 0; i < x; i++) {
                if (!prev_permutation(s.begin(), s.end())) {
                    sort(s.rbegin(), s.rend());
                }
            }
        }

        cout << s << endl;
    }
    

    return 0;
}