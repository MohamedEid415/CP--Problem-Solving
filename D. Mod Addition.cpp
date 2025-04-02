#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while (t--)
    {
        long long x, y; cin >> x>> y;
        //int cnt =0;
        long long dif = y-x;
        /*long long mx = max(y%x , x%y);
        long long sm = min(y%x , x%y);
        long long ref =x;
        while (ref < dif)
        {
            if((dif - ref )< mx) {
                ref += sm;
                ++cnt;
            }else{
                ref += mx;
                ++cnt;
            }
        }
        cout << cnt;*/
        int m1=x%y;int m2=y%x;
        if(x==y){cout<<0<<endl;continue;}
        if(m2==0){cout<<y/x -1<<endl;continue;}
        cout<<dif/m1+dif/m2<<endl;
    }
    
}

