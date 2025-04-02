#include <iostream>
using namespace std;
int main(){

int a, b, c;
cin >> a >> b>> c;

if(a==b && b == c){
    cout << a;
}
else if( a == b && c < b){
    cout << c;
}
else if( a == b && c > b){
    cout << b;
}
else if( a == c && c > b){
    cout << b;
}
else if( a == c && c < b){
    cout << c;
}
else if( c == b && c > a){
    cout << a;
}
else if( c == b && c < a){
    cout << c;
}

if(b < a && b < c){
    cout << b;
}

if(c < b && c < a){
    cout << c;
}

if(a < b && a < c){
    cout << a;
}






return 0;
}
