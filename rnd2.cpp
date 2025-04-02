#include <iostream>
using namespace std;
int main(){

    int colu;
    cin >>colu;
    
    string grid[2][colu];
    for(int row=0; row<2; row++){
        for(int q =0; q < colu; q++){
            cin >> grid[row][colu];
            
            if(grid[row][colu] =="G" || grid[row][colu] =="B"){
                grid[row][colu] ="ok";
            }else{
                grid[row][colu] ="no";
            }
        }
    }


    for(int row=0; row<2; row++){
        for(int q =0; q < colu; q++){
            if(grid[row][colu] =="ok"){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }
    }
}
