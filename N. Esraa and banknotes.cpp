#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    long long count =0;
    while (n>=50){
      n-=50;
      count++;
    }
    while (n>=20){
        n-=20;
        count++;
    }
    while (n>0){
        n-=1;
        count++;
    }
    cout << count;
}