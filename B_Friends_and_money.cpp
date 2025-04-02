#include <bits/stdc++.h>
#include <set>
#include <map>
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
    uint n{0}, q{0}; cin >> n >> q;
    unordered_map<str, ll>m;
    while (n--)
    {
        str x{""}; uint mn{0};
        cin >> x >> mn;

        m[x]= mn;
        
    }
    while (q--)
    {
        str qr{""}; cin >> qr;
        if(qr == "1"){
            str name{""}; cin >> name;
            ll y; cin >> y;   
            m[name] += y;
        }else if(qr =="2"){
            
            str name{""}; cin >> name;
                cout << m[name]<< endl;
        }
    }
    
    return 0;
}