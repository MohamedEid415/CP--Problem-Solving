#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define endl '\n'
#define uint unsigned int
#define str string
#define vec vector

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    uint n{0}, q{0};
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        str query;
        cin >> query;

        if (query == "pop_back" && !s.empty())
        {
            s.pop_back();
        }

        else if (query == "front" && !s.empty())
        {
            cout << s.front() << endl;
        }

        else if (query == "back" && !s.empty())
        {
            cout << s.back() << endl;
        }

        else if (query == "reverse")
        {
            uint l{0}, r{0};
            cin >> l >> r;
            if(r >= l){
                reverse(s.begin() + (--l), s.begin() + (r));
            }else{
                reverse(s.begin() + (--r), s.begin() + (l));
            }
        }

        else if (query == "sort")
        {
            uint l{0}, r{0};
            cin >> l >> r;
            if(r >= l){
                sort(s.begin() + (--l), s.begin() + (r));
            }else{
                sort(s.begin() + (--r), s.begin() + (l));
            }
        }

        else if (query == "substr")
        {
            uint l{0}, r{0};
            cin >> l >> r;
            l--;r--;
            if(r >= l)
                cout << s.substr(l, (r)-l+1) << endl;
            else{
                cout << s.substr(r, (l)-r+1) << endl;
            }
        }

        else if (query == "print" && !s.empty())
        {
            uint pos;
            cin >> pos;
            cout << s[pos-1] << endl;
        }

        else if (query == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }

    return 0;
}