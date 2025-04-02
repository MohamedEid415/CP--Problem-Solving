#include <iostream>
using namespace std;
int main(){

    int x, y, n;
    cin >> x >> y >>n;
    for(int j = 1; j<=n; j++){


        if((j % y ==0) && (j % x ==0)){
            cout<<"FizzBuzz\n";}
        else if(j % x ==0){
            cout<<"Fizz\n";}
        else if(j % y ==0){
            cout<<"Buzz\n";}
        else if((j % y ==0) && (j % x ==0)){
            cout<<"FizzBuzz\n";}
        else{
            cout<<j<<"\n";
}

    }










}

