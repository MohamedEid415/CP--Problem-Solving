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
    uint n{0},k{0}; cin >> n >>k;
    multiset<uint> cont;
    while (n--)
    {
        uint y; cin >>y;
        cont.insert(y);
    }
    auto it = cont.begin();
    uint sum{0};
    for (uint i = 0; i < k; i++)
    {
        if(it != cont.begin() && *it != *prev(it)){
            sum += cont.count(*it);
        }else if(it == cont.begin()){
            sum += cont.count(*it);
        }
    }
    if(sum == k){
        cout << *it << endl;
    }else{
        cout << -1 << endl;
    }









    // uint sum{0}, count{0};
    // auto it = cont.begin();
    // for (auto i : cont)
    // {
    //     sum += cont.count(*i);
    //     it++
    // }

    // if(sum == k){
    //     for (uint i = 0; i < k; i++)
    //     {
    //         it++;
    //     }
    //     cout << *it<<endl;
    // }else{
    //     cout <<  -1 << endl;
    // }
    return 0;
}