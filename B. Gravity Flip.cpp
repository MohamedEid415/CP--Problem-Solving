#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
void sorting(int size, int arr[]){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            int o = arr[j];
            arr[j] =arr[j+1];
            arr[j+1] = o;
        }
    }
    }
}


int main(){
    int size; cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
        
    }
    sorting(size , nums);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    
    
}
