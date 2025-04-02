#include <bits/stdc++.h>
using namespace std;

long long fact(int num) {
    int t = num;
    long long sum = 1;
    while(t >0 ){
        sum = sum * t;
        --t;
    }
    return sum;
}

int main() {
    int a, b; cin >> a>> b;
    int r = min(a, b);
    cout << fact(r);
}

