#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin  >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == "Ham"){
            cout << "Ham";
            return 0;
        }
        if(arr[i] == "Sausage"){
            cout << "Sausage";
            return 0;
        }
        if(arr[i] == "Turkey"){
            cout << "Turkey";
            return 0;
        }
        if(arr[i] == "Beef"){
            cout << "Beef";
            return 0;
        }
        if(arr[i] == "Tuna"){
            cout << "Tuna";
            return 0;
        }
        if(n == 1)
        {
            cout << arr[0];
            return 0;
        }
    }
    
}   