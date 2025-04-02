#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){

    //  building the body of the snack
    int n_row, m_colu;
    cin >> n_row >> m_colu;
    string snack[n_row][m_colu];

    // make cells
    for(int y= 1; y <= n_row; y++){
        if (y%2!=0){
            for (int i = 0; i < m_colu; i++){
                snack[y-1][i]="#";}}
        if(y%2==0){
            if((y/2)%2 !=0){
                for (int i = 0; i < m_colu - 1; i++){
                    snack[y-1][i]=".";}
                snack[y-1][m_colu-1]="#";
            }else{
                snack[y-1][0]="#";
                for(int j = 1; j < (m_colu);j++){
                    snack[y-1][j]=".";}
                }}
    }


    for(int row = 0; row < n_row; row++){
         for(int colu =0; colu < m_colu; colu++){
            cout<< snack[row][colu];}
            cout<<"\n";}
    
}
