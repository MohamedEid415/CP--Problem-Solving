#include <bits/stdc++.h>
using namespace std;
long long per(long long a, long long b) {
    long long o = a +1;
    long long sum = 1;
    while (o <= b) {
        sum *= o;
        ++o;
    }
    return sum;
}
int main() {
    long long a, b; cin >> a >> b;
    if (a - b == 5) cout<<0;
    cout << ( per(a, b) )%10;
}