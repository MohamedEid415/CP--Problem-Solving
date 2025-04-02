#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    while (t > 0){
        int n; cin >>n;
        int hp =0,sum =0;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            int sq = sqrt(sum);
            if(sum % 2 ==1 && sq*sq == sum){
                hp++;
            }
        }

        cout << hp<<"\n";
        --t;
    }
}
