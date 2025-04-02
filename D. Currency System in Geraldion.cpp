#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
bool find_critical(int size_nuns,int num[]){
    for (int i = 0; i < size_nuns; i++)
    {
        if (num[i] == 1)  return true;
    }
    return false;
}

int main(){
    int size; cin >> size;
    int val[size];
    for (int i = 0; i < size; i++)
    {
        cin>> val[i];
    }
    if (find_critical(size, val)) cout <<-1;
    else cout <<1;
}