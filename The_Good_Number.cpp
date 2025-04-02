#include <iostream>
using namespace std;
int main(){
long long n;
cin >>n;
int firstdigit;
    firstdigit = n%2;
bool good = true;

while(n > 0){

    int lastdigit = n%10;
    if(lastdigit % 2 != firstdigit){
        good = false;
        break;
    }
    n /= 10;
}
if(good){
    cout <<"Good Number\n";
}else{
        cout <<"Not Good Number\n";
}


}