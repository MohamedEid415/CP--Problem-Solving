#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int t = 0; t<n ;t++){
        for(int q =0 ; q <n ; q++){
            cin >> arr[t][q];
        }
    }
    
        int sum_sec =0;

    int sum_main =0;
        for(int t = 0; t<n ;t++){
                    sum_main += arr[t][t];
                    sum_sec += arr[t][n-1 -t];
            }
    
    cout << abs(sum_main - sum_sec);
}
