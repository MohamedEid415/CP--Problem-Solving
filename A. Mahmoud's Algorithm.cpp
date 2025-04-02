#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    cout << n <<" ";
    while(n > 1){
     if(n % 2 == 0){
       n /= 2; // if he is even!!
       cout << n <<" ";
     }else{
       n = n*3 + 1;
         cout << n <<" ";
     }
    }
    return 0;
}

