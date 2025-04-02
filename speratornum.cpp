#include <iostream>
using namespace std;


int main(){

// input
int num, sumeven, sumodd;

//processing & output 
for(int i = 1; i <= 10; i++){
    cout <<"Enter the "<< i <<" number from 10: ";
    cin >> num;
    if( num % 2 == 0 ){
        sumeven += num;
    } 
    else{
        sumodd += num;
    }
}

cout <<"The submission of even numbers: "<< sumeven << "\n";
cout <<"The submission of odd numbers: "<< sumodd << "\n";
return 0;
}