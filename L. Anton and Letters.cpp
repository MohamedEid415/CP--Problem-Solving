#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs
int litters_counter(string s){
    int cnt=0, freq[26]={0};
    for(char q : s){
        if(q >= 'a' && q <= 'z'){
            int W = q - 'a';
            if(freq[W] == 0){
                freq[W]++;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    string bracets; getline(cin, bracets);
    cout << litters_counter(bracets);
}