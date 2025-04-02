#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main(){

int t;
int n;
cin >> t;
string output[t];
for(int Q =0; Q < t; Q++){
    //  input arry
    cin>>n;
    int arr1[n];
    for(int R =0; R < n; R++){
        cin >> arr1[R];
    }

    //  rearrange
    sort(arr1, arr1 + n);

    // check
    bool rslt = true;
    for (int i = 1; i < n; i++) {
        if (arr1[i] == arr1[i - 1]) {
            rslt = false;
            break;
        }
    }
    if(rslt == true){
        output[Q] ="YES";}
    else{
        output[Q] ="NO";
    }
}
// output the results
for(int l =0; l < t; l++){
    cout<< output[l]<<"\n";
}
}



