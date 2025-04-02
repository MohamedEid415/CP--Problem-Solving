#include <bits/stdc++.h>
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
    uint q{0}; cin >>q;
    queue <uint> r;
    while (q--)
    {
        uint x{0}; cin >> x;
        if(x == 1 ){
            uint num{0}; cin >> num;
            r.push(num);
        }else{
            uint num{0}; 
            cin >> num;
            if (!r.empty() && num == r.front()) {
                cout << "Yes" << endl;
                r.pop();
            } else {
                cout << "No" << endl;
                r.pop();
            }
        }
    }
    return 0;
}