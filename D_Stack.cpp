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
    stack<uint> st;
    uint q{0}; cin >> q;
    while(q--){
        str que; cin >> que;
        
        if (que == "push"){
            uint x{0};
            cin >> x;
            st.push(x);
        }
        else if (que == "pop"){
            st.pop();
        }
        else{
            cout << st.top() << endl;
        }
    }

    return 0;
}