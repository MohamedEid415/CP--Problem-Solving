#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define endl "\n"
#define str string

int main()
{
    str a ="",b=""; cin >> a>>b;
    str res ="";
    int sa = a.size();
    int sb = b.size();
    if(sa > sb){
        for (int i = 0; i < sb; i++)
        {
            res += a[i];
            res += b[i];
        }
        res += a.substr(sb, sa-1);


    }else if(sa == sb){
        for (int i = 0; i < sb; i++)
        {
            res += a[i];
            res += b[i];
        }


        
    }else{
        for (int i = 0; i < sa; i++)
        {
            res += a[i];
            res += b[i];
        }
        res += a.substr(sa, sb-1);
    }
    cout << res << endl;
    return 0;
}