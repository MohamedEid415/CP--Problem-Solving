#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int t; cin >> t;
    string out[t];
    fill(out, out + t,"Yes");
    while (t > 0){
        int n; cin >>n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){cin >> a[i];}
        for (int i = 0; i < n; i++){cin >> b[i];}
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[n-1] || b[i] > b[n-1]) {
                swap(a[i], b[i]);
            }
            if((a[i] > a[n-1]) || (b[i] > b[n-1])) {
                out[t] = "No";}
        }
        t--;
    }
    for (int i = 0; i < t; i++)
    {
        cout << out[i]<<"\n";
    }
    

}

