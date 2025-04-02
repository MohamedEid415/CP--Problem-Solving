#include <iostream>
using namespace std;
int main(){
long long n;
cin >> n;
long long reversed1 = 0;

while(n > 0){

reversed1 = reversed1*10 + n % 10;
n /= 10;


}
cout<<reversed1;
}
