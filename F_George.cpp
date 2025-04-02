#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define endl "\n"
#define str string

int main()
{
    int n = 0; cin >> n;
    int count = 0;
    while(n--){
        int p = 0, q = 0; cin >> p >>q;
        if(p < q && q - p >= 2){
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}