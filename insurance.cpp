#include <iostream>
using namespace std;
// input
char marital, sex;
int age;
cout <<"Entre your marital status's or m', age, sex'm or f' on order: ";
cin >> marital, age, sex;
// process and output
int main(){
    if( (marital == 'm')||(marital == 's' && age > 30 && sex =='m')
    ||(marital == 's' && age > 25 && sex =='f') ){
        cout <<"You will be insured!! ^_^\n";
    }
    else{
        cout <<"You won't be insured ~_~ \n";
    }
return 0;
}