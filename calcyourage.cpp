#include <iostream>
using namespace std;
int main(){
    cout << "======>> Your Age Application <<======\n";
    int age;
    cout << "How old are you?: "; cin >> age;
    cout <<"Your Months are:"<< age * 12 << "Months\n";
    cout <<"Your Days are:"<< age * 365.5 << "Days\n";
    cout <<"Your hours are:"<< age * 365.5 * 24 <<"Hours\n";

    return 0;
}