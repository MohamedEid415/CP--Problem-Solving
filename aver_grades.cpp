#include <iostream>
using namespace std;
// inputs
int counter = 1;
int grade, sum;
// process
int main(){
while(counter <= 7){
    cout <<"Enter the final garde for student "<< counter<< ": ";
    cin >> grade;
    sum +=grade;
    counter++;
}
// outputs
cout <<"\n Student grades average is: "<< sum/counter <<"\n";
return 0;
}