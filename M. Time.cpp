#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    long long h=0, m=0;
    h= n/3600;
    n = n - h*3600;
    m = n/60;
    n = n - m*60;
    cout << h << " " << m << " " << n << endl;
}