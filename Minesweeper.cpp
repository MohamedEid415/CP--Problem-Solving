#include <iostream>
#include <string>
using namespace std;

int main() {
    int h_rows, w_colu;
    cin >> h_rows >> w_colu;
    string minesweeper[h_rows][w_colu];

    // Read the grid input
    for (int r = 0; r < h_rows; r++) {
        for (int c = 0; c < w_colu; c++) {
            cin >> minesweeper[r][c];
        }
    }

    // Create a mirror grid for the result
    string miror[h_rows][w_colu];

    // Directions for the 8 adjacent cells (row, col)
    int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    // Process each cell in the grid
    for (int r = 0; r < h_rows; r++) {
        for (int c = 0; c < w_colu; c++) {
            if (minesweeper[r][c] == "#") {
                // If it's a bomb, keep it as "#"
                miror[r][c] = "#";
            } else {
                // Count the bombs in adjacent cells
                int count = 0;
                for (int k = 0; k < 8; k++) {
                    int nr = r + dx[k]; // New row
                    int nc = c + dy[k]; // New column

                    if (nr >= 0 && nr < h_rows && nc >= 0 && nc < w_colu && minesweeper[nr][nc] == "#") {
                        count++;
                    }
                }
                miror[r][c] = to_string(count);
            }
        }
    }

    // Output the modified grid
    for (int r = 0; r < h_rows; r++) {
        for (int c = 0; c < w_colu; c++) {
            cout << miror[r][c];
        }
        cout << "\n";
    }

    return 0;
}