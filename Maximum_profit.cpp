#include <iostream>
#include <algorithm>
using namespace std;
int main(){
// make arrey of checks and what iam need to sum
    int num; // num of chec
    int ineed;
    cin >> num >> ineed;
    int checks[num];

    // VALUES
    for(int W = 0; W < num; W++){
        cin >> checks[W];}

    // arrenge Descendly
    sort(checks,checks + num ,greater<int>());

    // sum the ineed
    int sum =0;
    for(int t = 0 ; t<ineed; t++){
        sum += checks[t];}    


    //  print sum
    cout << sum;
}