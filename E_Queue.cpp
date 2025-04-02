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
    queue <uint> q;
    uint Q{0}; cin >> Q;
    while (Q--)
    {
        str query=""; cin >> query;
        if(query == "push"){
            uint x{0}; cin >> x;
            q.push(x);
        }
        else if(query == "pop"){
            q.pop();
       }
        else if(query == "front"){
            cout << q.front()<< endl;
        }
        else{   
            cout << q.back() << endl;
        }
    }
    

    return 0;
}