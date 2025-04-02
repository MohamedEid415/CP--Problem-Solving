#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; cin >>n;
    int arr[n][3];
    int cnt[n];
    fill(cnt, cnt + n,0);
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cin >> arr[r][c];
        }
        
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (arr[r][c] == 1){
                cnt[r]++;
            }        
        }
        
    }
    int imp =0;
    for (int c = 0; c < n; c++)
        {
            if (cnt[c] > 1){
                ++imp;
            }        
        }
    cout <<imp;
}
