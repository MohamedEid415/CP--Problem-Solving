#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--){

      int s; cin >> s;
      if (s == 1) {
        cout << "yes" << endl;
        return 0;
      }

      long long r[s];
      long long inc_r[s];
        for(int i = 0; i < s; i++){
          cin >> r[i];
          inc_r[i] = r[i];
        }
        sort(r,r+s);
    string after ="";
      string before ="";
    for(int i=0;i<s;i++){
      after +=to_string(r[i]);
      before +=to_string(inc_r[i]);
    }
      // cout << after << endl;
      // cout << before << endl;
    if(after == before){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
    }
}
