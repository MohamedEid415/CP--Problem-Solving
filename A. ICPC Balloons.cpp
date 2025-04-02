#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n; // length
        string s;
        cin >> s;
        string have = " ";
        bool ptr = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < have.size(); j++)
            {
                if (s[i] == have[j])
                {
                    count += 1;
                    ptr = false;
                }
            }
            if (ptr)
            {
                have += s[i];
                count += 2;
            }
            ptr = true;
        }
        cout << count<<endl;
    }
}