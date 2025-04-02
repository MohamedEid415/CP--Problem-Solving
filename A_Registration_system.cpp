#include <bits/stdc++.h>
#include <set>
#include <map>
#include <vector>
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
    uint n{0};
    cin >> n;
    unordered_map<str, uint> db;
    while (n--)
    {
        str us;
        cin >> us;
        if (db.find(us) == db.end())
        {
            db.insert({us, 0});
            cout << "OK" << endl;
        }
        else
        {
            db[us]++;
            cout << us << db[us] << endl;
        }
    }

    return 0;
}