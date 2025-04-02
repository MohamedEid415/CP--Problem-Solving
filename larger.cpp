#include <iostream>
using namespace std;
int larger(int num1, int num2);
int num1, num2;
int main()
{
cout <<"Please enter two number: ";
cin >> num1 >> num2;
int c;
c = larger(num1, num2);

cout<< "the larger amout is: "<< c;

}


int larger(int num1, int num2){
int max;

if(num1 >= num2){
    max = num1;
}
else{
    max = num2;
}

    return max;
}
