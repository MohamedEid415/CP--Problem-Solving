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

struct record{
    str name{""};
    int arabic{0},math{0},science{0},english{0},sum{0};

    record(str n, int a, int m,int s,int e){
        name = n;
        arabic= a;
        math = m;
        science = s;
        english = e;
        sum = a + m + s + e;
    }
};

bool comp(record &g1, record &g2){
    if(abs(g1.sum - g2.sum) > 10){
        return g1.sum > g2.sum;
    }else{
        return g2.name > g1.name;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //

    vec<record> table;
    uint n{0}; cin >> n;
    vec <record> grd;
    str name;
    uint a{0},m{0},s{0},e{0};
    for (int i = 0; i < n; i++)
    {
        cin >> name >> a >> m >> s >> e;
        grd.push_back(record(name,a,m,s,e));
    }
    sort(grd.begin(), grd.end(), comp);

    for (auto it : grd)
    {
        cout << it.name << " " <<it.sum <<" "<<it.arabic<<" "<<it.math<<" "<<it.science<<" "<<it.english<< endl;
    }
    

    return 0;
}