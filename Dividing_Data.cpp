#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n; // num of files
    cin >> n;

    // long long s; // storage of files 

    long long x; // my max storage that u can use
    cin >> x;

    int files[n]; // input index
    for(int y = 0; y < n; y++){
        cin >> files[y];
    }
    sort(files, files + n); // cos he want the max so starting from small to big


    int storage = 0;
    int counter = 0;
    for(int p = 0; p<n ;p++){
        if((storage + files[p]) <= x){
            storage += files[p];
            counter += 1;
        }
    } 

    cout <<counter;




}