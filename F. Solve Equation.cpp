#include <bits/stdc++.h>
using namespace std;

int main() {
    long long b, c, d; cin >> b>> c>> d;
    if(d >= c){
        cout <<-1<< "\n";
    }else{
        long long a=(d-b)%c;
        a+=c;
        a %= c;
        if (a==0) a+=c;
        cout << a << "\n";
    }
}

