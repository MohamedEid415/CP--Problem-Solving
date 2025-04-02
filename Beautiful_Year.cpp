#include <iostream>
using namespace std;
#include <string>

int main() {

int year;
cin >>year;


int d1, d2, d3, d4;

for(int j = year+1; j < 10000; j++){
    
int org = j;

d1 = j%10;
j /= 10;
d2 = j%10;
j /= 10;
d3 = j%10;
j /= 10;
d4 = j%10;

j =org;
if(d1 != d2 && d2 !=d3 && d3 != d4 && d4 !=d1 && d1 != d3 && d2 != d4){
    cout<<org;
    break;
}

}
}

