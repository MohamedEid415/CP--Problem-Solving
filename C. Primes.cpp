#include <iostream>
#include <cmath>
using namespace std;
string is_prime(long long num1 ,long long num2) {
    long long square = num1*num1 - num2*num2;
    if (square == 1) return "NO";
    if(num1 - num2>1){
        return "NO";
    }

    for (long long i = 2; i <= sqrt(square); i++)
    {
        if(square % i ==0ll) return "NO";
        
    }
    return "YES";
}
int main() {
    long long a , b; cin >> a >> b;
    cout << is_prime(a ,b); 
}
