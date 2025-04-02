#include <bits/stdc++.h>
using namespace std;
// funcs and structs
string count(string &word){
    int cnD=0, cnA=0; 
    for (int i = 0; i < size(word); i++)
    {
        if(word[i]=='A'){
            cnA++;
        }else{
            cnD++;
        }
    }
    if(cnA > cnD){
        return "Anton";}
    else if(cnD > cnA){
        return "Danik";}
    else{return "Friendship";}

}

int main(){
    int n; cin >> n;
    string word; cin >> word;

    cout << count(word);
}
