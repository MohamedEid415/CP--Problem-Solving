#include <iostream>
using namespace std;

// input

int num;
int main(){
cout <<"enter the number of stars: ";
cin >>num;


// process and output -- i = line

for(int i = 1; i <= num; i++){
    for(int j = 1; j <= i; j++){
        cout<<"*";
    }
    cout<<"\n";
}

return 0;
}