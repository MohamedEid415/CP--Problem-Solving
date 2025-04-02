#include <iostream>
#include <cmath>
using namespace std;
int main(){
//  make table 

int Chessboard[8][8];
for(int i = 0; i<8; i++){
    for(int j = 0; j<8; j++){   
        cin >> Chessboard[i][j];
    }
}

// find positions
int Q_row = 0;
int Q_colu = 0;
int K_row = 0;
int K_colu = 0;

for(int i = 0; i<8; i++){
    for(int j = 0; j<8; j++){   
        if(Chessboard[i][j] == 'Q'){
            Q_row = i;
            Q_colu = j;
        }else if(Chessboard[i][j] == 'K'){
            K_row = i;
            K_colu = j;
        }
    }
}

// if Queen can attack King or not !!

if((Q_row == K_row) ||( Q_colu == K_colu )||(abs(Q_row - K_row) == abs(Q_colu - K_colu))){
    cout <<"Check";
}else{
        cout <<"Not Check";
}




}