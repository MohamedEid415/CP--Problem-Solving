#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
string n;  cin >> n;
int a = n.size();
int b =(n[a-2] -48)*10;
b+=n[a-1]-48;
if(b% 4 ==0){
    cout <<4;
}else{
    cout <<0;
}
}
