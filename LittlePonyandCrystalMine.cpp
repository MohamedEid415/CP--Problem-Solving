#include <iostream>
using namespace std;
int main(){

    int n;  // row and columins
    cin >> n;
    int mid = n / 2;

    for(int i = 0; i < n; i++){
        int distance_from_mid;
        if(i < mid){
            distance_from_mid = mid - i; 
        }else{
            distance_from_mid = i - mid;
        }
        int num_diamonds = n - 2 * distance_from_mid;

        for (int j = 0; j < distance_from_mid; j++) {
            cout << '*';
        }
        for (int j = 0; j < num_diamonds; j++) {
            cout << 'D';
        }
        for (int j = 0; j < distance_from_mid; j++) {
            cout << '*';
        }
        cout <<"\n";


    }







}