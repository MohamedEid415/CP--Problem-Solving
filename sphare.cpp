#include <iostream>
using namespace std;
float area(float num);
double volume(double num1);
double r;

int main()
{
cout<<"enter r: ";
cin >> r;
cout<< "area is " <<area(r)<< " volume is "<< volume(r);

return 0;
}

float area(float num){
float area;
area = num * num * 3.14;

return area;
}

double volume(double num1){
double volume;
volume = (4/3) * 3.14 * num1 * num1 * num1;

return volume;
}

