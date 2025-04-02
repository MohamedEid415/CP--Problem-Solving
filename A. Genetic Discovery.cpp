#include <iostream>
using namespace std;

int main(){
    int n; cin >>n;
    string out ="";
    string s; cin >>s;
    out = s;
    n -=1;
    while(n--){
        string ns; cin >> ns;
        for (int i = 0; i < s.size(); i++)
        {
            if(out[i] == '.'){
                out[i] = ns[i];
            }
        }
    }
    cout << out;
}