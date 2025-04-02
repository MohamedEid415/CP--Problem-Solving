#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int t;  cin >> t;
    while(t > 0){
        int n, m, k; cin >> n>> m>> k;
        int cnt =0, numP=0;
        string inp; cin >> inp;

        for (int i = 0; i < n; i++)
        {
            if(inp[i] == '0') {
                cnt++;
                if(cnt ==  m) {
                    i += k-1;
                    numP++;
                    cnt =0;
            }
            }else{
                cnt =0;
            }           
        }
        cout << numP<<"\n";        
        --t;
    }

}

