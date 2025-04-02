#include <iostream>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        char grid[3][3];
        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cin >> grid[row][col];
            }
        }
        if(grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2])
        {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
        cout << grid[0][0] << endl;}
        else if(grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2])
        {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
        cout << grid[1][0] << endl;}
            else if(grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2])
            {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
                cout << grid[2][0] << endl;}
            
        //````````````````````````ذذذذذذذذذذذذذ
        else if(grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0])
        {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
        cout << grid[0][0] << endl;}
            else if(grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1])
            {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
                cout << grid[0][1] << endl;}
            else if(grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2])
            {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
                cout << grid[0][2] << endl;}
        //````````````````````````ذذذذذذذذذذذذذ
        else if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
        {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
        cout << grid[0][0]<< endl;}

            else if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])
            {if(grid[0][2]== '.'){cout <<"DRAW" << endl;}
                cout << grid[0][2] << endl;}
            else{
                cout<<"DRAW" << endl;;
            }
        
    }
}