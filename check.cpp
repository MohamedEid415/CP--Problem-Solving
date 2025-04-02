#include <iostream>
using namespace std;
int number;
int main(){
    // input
    cout <<"Enter number you want to check:";
    cin >>number;
    // process and output
    if(number > 0){
        cout <<"Positive Number ^_^ \n";
        return 0;
    }
    if(number == 0){
        cout <<"this is zero, pls try again\n";
        return 1;
    }
    else{
        cout <<"Negative Number !_!\n";
        return 0;
    }
return 0;
}