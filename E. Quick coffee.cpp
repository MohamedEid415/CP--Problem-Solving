#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, d; cin >> a>>d;
    int  calc =d/a;
    int  mod = d%a;
    int cnt =0;
    while (mod > calc){
        if (mod % calc != 0) {
            mod %=calc;
            cnt++;
        }
    }
    cnt++;
    cout << a + cnt;
}