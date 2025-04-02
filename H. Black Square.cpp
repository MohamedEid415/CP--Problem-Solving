#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs
int equals[4];
int calories_sum(string R){
    int sum =0;
    for(char x : R){
        if(x == '1'){
            sum += equals[0];
        }
        if(x == '2'){
            sum += equals[1];
        }
        if(x == '3'){
            sum += equals[2];
        }
        if(x == '4'){
            sum += equals[3];
        }
    }
    return sum;
}

int main(){
    for (int i = 0; i < 4; i++)
    {
        cin >> equals[i];
    }
    string square; cin >> square;
    cout << calories_sum(square);
}