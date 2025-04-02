#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
string inverse(string x){
    char inversed[size(x)];
    string intext ="";
    for (int i = 0; i < size(x); i++)
    {
        int y = size(x) -1 -i;
        inversed[i] = x[y];
        intext +=inversed[i];
    }
    return intext;
    
}
int main(){
    string word , other; cin >> word>>other;
    if (other == inverse(word)) { cout << "YES"; }else{ cout <<"NO";}
}