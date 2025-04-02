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
    uint q{0}; cin >> q;
    set<uint> s;
    auto it = s.begin();
    while(q--){
        str qu; cin >> qu;
        if(qu == "find"){
            uint x; cin >>x;
            if(s.find(x) != s.end()){
                cout << "found" << endl;
             }else{
                cout << "not found"<< endl;
             }
        }
        else if(qu == "lower_bound"){
            uint x; cin >>x;
            if( s.lower_bound(x) == s.end() ){
                cout << "-1"<< endl;
            }else{
                cout << *s.lower_bound(x)<< endl;
            }
        }
        else if(qu == "upper_bound"){
            uint x; cin >>x;
            if( s.upper_bound(x) == s.end() ){
                cout << "-1"<< endl;
            }else{
                cout << *s.upper_bound(x) << endl;
            }
        }
        else{
            uint x; cin >>x;
            s.insert(x);
        }
    }
    return 0;
}