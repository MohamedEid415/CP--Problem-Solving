#include <iostream>
using namespace std;
#include <string>
int main(){

int t;
int n;
cin >> t;
int output[t];
int majority;

for(int Q =0; Q < t; Q++){

    cin >>n;
    int spy[n];

    for(int i = 0; i < n ; i ++){
        cin >> spy[i];
    }
    
    if(spy[0] == spy[1]){majority = spy[0];}
    else if(spy[1] == spy[2]){majority = spy[2];}
    else{majority = spy[2];}

    for(int k =0; k<n; k++){
        if(majority !=spy[k]){output[Q] = k + 1;}}

}


for(int O = 0; O<t; O ++){    
    cout<< output[O]<<" ";
}

}



