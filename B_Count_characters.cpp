#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    str s; cin >>s;
    char arr[size(s)];
    uint freq[123] = {0};
    bool qual[123] = {false};
    for (int i = 0; i < size(s); i++)
    {
        arr[i] = s[i];
        freq[arr[i]]++;
    }
    sort(arr, arr + size(s));
    for (int i = 0; i < size(s); i++)
    {   
        if(qual[arr[i]] == false){
            cout << arr[i]<< " " << freq[arr[i]] <<endl;
            qual[arr[i]] = true;
        }
    }
    
    return 0;
}