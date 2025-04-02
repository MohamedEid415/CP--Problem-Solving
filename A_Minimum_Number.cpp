#include <bits/stdc++.h>
using namespace std;
// #define long long ll
#define endl "\n"

int main(){
    long long n= 0, k = 0; cin >> n >> k;
    if(k == n){
        cout << 0<< endl;
        return 0;
    }
    if(k == 0){
        cout << n<< endl;
        return 0;
    }
    if(k == 1){
        cout << 0<< endl;
        return 0;
    }
    while (n >= k)
    {
        n -=k;
    }
    cout << n;
    return 0;
}