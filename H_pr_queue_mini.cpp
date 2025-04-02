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
    priority_queue <uint> q;
    uint Q{0}; cin >> Q;
    uint std{0};
    while (Q--)
    {
        str s=""; cin >> s;
        if(s == "push"){
            uint x{0}; cin >> x;
            q.push(-1*x);
            
        }
        else if(s == "top"){
            cout << -1*q.top() << endl;
        }else{
            q.pop();
        }
    }
    

    return 0;
}