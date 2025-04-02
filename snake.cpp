#include <iostream>
using namespace std;
int main(){

    int row, colu;
    cin >> row >> colu;
    for(int j = 1; j <= row; j++){
        
        if(j % 2 != 0){
            for(int q = 1; q <= colu; q++){
            cout <<"#";}
        }else if((j / 2) % 2 == 0){
            cout<<"#";
            for(int q = 1; q <= (colu - 1); q++){
                cout <<".";}}
        else{
            for(int q = 1; q <= (colu - 1); q++){
                cout <<".";}
                cout <<"#";}

            cout<<"\n";

        }

    }




            // cout<<"#";
            // for(int q = 1; q <= (colu - 1); q++){
            //     cout <<".";}



            //     else if((j / 2) % 2 == 0){
            //     for(int q = 1; q <= (colu - 1); q++){
            //     cout <<".";}
            //     cout<<"#";}