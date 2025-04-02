#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define endl "\n"
#define str string

int main()
{
    str s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 'a' || s[i] > 'z')
        {
            sum += s[i] - '0';
        }
    }
    cout << sum;
    return 0;
}