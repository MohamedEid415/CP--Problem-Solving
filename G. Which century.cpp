#include <bits/stdc++.h>
using namespace std;
int main() {
    int y; cin>>y;
    if(y%100 == 0){
      cout << y/100;}
    else{
      cout << ((y-1)/100) + 1;
      }

}

