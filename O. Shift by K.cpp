#include <bits/stdc++.h>
using namespace std;
int main() {
    char e, c; cin>>e;
    long long k; cin>>k;
    if (e+k%26 > 122) {
        c = (e+k%26) - 26;
    }else {
        c = e+k%26;
    }
    cout << c;
}