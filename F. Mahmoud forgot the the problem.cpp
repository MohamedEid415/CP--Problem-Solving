#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {cin >> arr[i];}
    sort(arr,arr+4);
    for (int i = 0; i < 4; i++) {
      if(arr[i] != i+1) {
          cout << i+1;
          return 0;
      }
    }
    cout << 5;
    return 0;

}