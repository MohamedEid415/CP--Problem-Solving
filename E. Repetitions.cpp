#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >>s;
    int A=0,C=0,G=0,T=0;
    bool sign[4] ={false};
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='A'){A++;}
        if(s[i]=='C'){C++;}
        if(s[i]=='G'){G++;}
        if(s[i]=='T'){T++;}
    }
    cout << max(max(A,C),max(G,T));
}