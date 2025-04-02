#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, x; cin >> n >> x;
    long long a=0,b=0,c=0;
    // x= 8;
    while (x>3) {
      x-=3;
      a++; // a = 2
    }
    // x = 2
    if (x<3) {
        b = x%3; //b = 0
    }

}