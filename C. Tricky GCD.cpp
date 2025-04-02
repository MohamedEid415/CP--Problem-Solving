#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t; cin >> t;
    while (t > 0){
    int n; cin >>n;
    if(n %2 != 0){
        n -=1;
    }
    cout << n/2<<"\n";
    --t;
    }
}
