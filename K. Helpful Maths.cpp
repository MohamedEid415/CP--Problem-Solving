#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
string rearange(string secuence){
    int nums_in_sec = size(secuence)/2+1;
    char arr[nums_in_sec]; fill(arr, arr + nums_in_sec,'0');
    int index =0;
    for (int i = 0; i < size(secuence); i++){
        if(secuence[i] != '+'){
            arr[index++] = secuence[i];
        }
    }
    sort(arr, arr + nums_in_sec);
    string perfect ="";
    for (int i = 0; i < nums_in_sec; i++){
        if(i != nums_in_sec-1){
            perfect +=arr[i];
            perfect +='+';}
        else{
            perfect +=arr[i];
        }
    }
        return perfect;
}

int main(){
    string secuence; cin >> secuence;
    cout << rearange(secuence);
}