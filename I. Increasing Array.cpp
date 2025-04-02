#include <bits/stdc++.h>
using namespace std;
int main() {
    int s; cin >> s;
    long long arr[s];
    for (int i = 0; i < s; i++){
        cin >> arr[i];
    }
    long long cnt = 0;
    for (int i = 0; i < s-1; i++){
        if (arr[i] > arr[i + 1]){
            cnt += arr[i] - arr[i + 1];
        }
    }
    cout << cnt << endl;
}
