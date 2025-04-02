#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, S;
    cin >> N >> S;

    if (S < N) {
        cout << "No";
        return 0;
    }

    long long min = max((long long)0, N - S);
    long long maxf =  max((long long)0, N - (S + 5) / 6);
    if (min == maxf) {
        cout << "Yes\n";
        cout << min;
    } else {
        cout << "No";
    }

    return 0;
}
