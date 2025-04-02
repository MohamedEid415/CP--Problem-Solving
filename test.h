#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
    

int main(){
    int t; cin >> t;
    string ans[t];
    for (int i=0; i <t; t++)
    {
        long long n, k; cin >> n>> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i]=i;
        }
        
        long long sum[n];
        sum[0] =0;
        for (int i = 1; i < n; i++)
        {
            sum[i] = i*k + (k*(k+1)/2);
            if(sum[i] % k == n%k){
                ans[t] ="YES";
                continue;
            } else {ans[t] ="NO";}
        }
        
        

    }
    for (int i = 0; i < t; i++)
        {   cout << ans[i]<<"\n";}

}