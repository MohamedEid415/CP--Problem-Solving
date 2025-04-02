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
    deque <uint> dq;
    uint q{0}; cin >> q;
    while(q--){
        str s=""; cin >> s;
        if(s == "push_back"){
            uint x{0}; cin >> x;
            dq.push_back(x);
        }
        else if(s == "push_front"){
            uint x{0}; cin >> x;
            dq.push_front(x);
        }
        else if(s == "pop_front"){
            dq.pop_front();
        }
        else if(s == "pop_back"){
            dq.pop_back();
        }
        else if(s == "front"){
            cout << dq.front() <<endl;
        }
        else if(s == "back"){
            cout << dq.back() << endl;
        }
        else{
            uint x{0}; cin >> x;
            cout << dq[--x] << endl;
        }
    }

    return 0;
}