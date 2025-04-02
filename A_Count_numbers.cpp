#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int

int main()
{
    uint n{0}, q{0}, z{0}, x{0};
    cin >> n >> q;
    uint freq[n+1];
    for (int i = 0; i <= n; i++)
    {
        freq[i] = 0;
    }
    while (q--)
    {
     cin >> z >>x;
     if(z==1){freq[x]++;}
     else{cout << freq[x]<<endl;}   
    }
    
    return 0;
}


    // uint n{0}, q{0}; cin >> n >> q;
    // n--;q--;
    // // uint arr[n];
    // uint freq[n];
    // for (int i = 0; i < n; i++)
    // {
    //     // arr[i] = 0;
    //     freq[i] = 0;
    // }

    // // vector<int> freq(n, 0); // 0 -> n-1
    // // unsigned int cnt{0};
    // unsigned int z{0};
    // unsigned int x{0};
    // while (q--)
    // {
    //     cin >> z >> x;
    //     x--;
    //     if (z == 1)
    //     {
    //         freq[x]++;
    //     }
    //     else
    //     {
    //         cout << freq[x]<<endl;
    //     }
    // }