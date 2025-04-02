#include <iostream>
using namespace std;
#include <string>
int main(){

int t; // num of arreys
cin >> t;
int be_ate[t] ={};


for(int Q =0; Q < t; Q++){
        // to make eack arrey
    int n;
    cin >> n;
    int box[n]; // box = friends = index

    for(int q =0; q < n; q++){ 
        cin >> box[q];
    }
    
    // find the mini index
    int mini = 10000000;
    for(int a = 0; a < n;a++ ){
        if(mini > box[a]){mini = box[a];}}
        
    // what iam will eat

    for(int z =0; z < n; z++){
        while(box[z] > mini){
            box[z] -= 1;
            be_ate[Q] +=1;
        }
    }

    }
// print what are eaten from each test
for(int v =0; v<t ; v++){
    cout<< be_ate[v] <<" ";
}
}


