#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    // input the image
        //1- rows and columins and words
    int H, W;
    cin >> H>>W;
    string lowercases[H];
    for(int x =0 ; x< H; x++){
        cin >> lowercases[x];}


    // make frame
        // big loop is rows!!, small is columins!!
    for(int t = 1; t <= (H+2); t++){
        
        if(t == 1){
            for(int p = 0 ; p <(W+2); p ++){
                cout <<"#";
            }
            cout<<"\n";
        }

        if(1 < t && t < (H+2)){
            cout<<"#";
            cout<<lowercases[t-1];
            cout<<"#";
            cout<<"\n";
        }

        if(t == (H+2)){
            for(int p = 0 ; p <(W+2); p ++){
                cout <<"#";
            }
        cout<<"\n";
        }
    }
    
}
