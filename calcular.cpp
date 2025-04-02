#include <iostream>
using namespace std;
int main(){

// input
int a, b;
cout <<"Enter A , B to make procession: ";
cin >> a >> b;

// process // output
if( (1 <=a) && (1 <=b) && (a <= 10^(9)) && (b <= 10^(9)) ){

cout<<"\n Then a + b = "<<a + b;
cout<<"\n Then a - b = "<<a - b;
cout<<"\n Then a * b = "<<a * b;
cout<<"\n Then a / b = "<<a / b;
cout<<"\n Then a % b = "<<a % b;

}
else{
cout<< "\n must 1 <= a ,b <= 10^(9)"; 
return 1;
}

return 0;
}