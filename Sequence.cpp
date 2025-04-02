#include <iostream>
using namespace std;
int main(){

int num_of_int;
cin >> num_of_int;
long long integer;
long long sumbmission = 0;
int even = 0;
int odd = 0;
for(int j = 1; j <= num_of_int; j++ ){
cin >> integer;
sumbmission += integer;
if(integer % 2 ==0){
    even +=1;
}else{
    odd +=1;
}
}

cout <<sumbmission<<" "<<odd<<" "<<even;
}