#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    //  building the body of the snack
    int n_row, m_colu;
    cin >> n_row >> m_colu;
    int snack[n_row][m_colu];

    for(int row = 1; row <= n_row; row++){
         for(int colu =1; colu <= m_colu; colu++){
             cin >> snack[row][colu];
         }
    }

    for(int l =1; l <= n_row; l++){

        if(l % 2 != 0){
            for(int i = 0; i < m_colu; i++){
                cout<<"#";}
            cout<<"\n";}


        if(l % 2 ==0){
            if((l/2)%2 !=0){
                for(int i = 0; i < (m_colu-1);i++){
                    cout<<".";
                }
                cout<<"#";
                cout<<"\n";}
            
            
            else{
                cout<<"#";
                for(int j = 0; j < (m_colu-1);j++){
                    cout<<".";}
                cout<<"\n";}
        }
    }
}
