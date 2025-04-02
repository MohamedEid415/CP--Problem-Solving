#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{   
    
    uint n{0}; cin >> n;
    vec<uint> arr(n, 0); for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    uint i{0};
        for (int i = 0; i < n;)
        {
            if(arr[i+1] < arr[i] && i != n-1){
                swap(arr[i],arr[i+1]);
                i = 0;
            }else{
                i++;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<" ";
        }
        
    return 0;
}