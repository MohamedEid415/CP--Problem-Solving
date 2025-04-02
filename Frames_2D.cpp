#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    char frame[row+2][col+2];
    // building the frame!!
    for(int r = 0; r < row + 2; r++){
        for(int co = 0; co < col + 2; co++){
            if(r == 0 || r == row + 1 || co == 0 || co == col + 1) {
                frame[r][co] = '#';
            } else {
                cin >> frame[r][co];
            }
        }
    }
    for(int r=0; r<row+2; r++){
        for(int co=0; co <col+2; co++){
            cout << frame[r][co];
        }
        cout<<"\n";
    }

}
