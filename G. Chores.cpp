#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs
int n_chores, k_things, x_maxtime;
int luba_performance(int arr[]){
    sort(arr, arr + n_chores,greater());
    // insert best choices
    int best_choice[k_things];
    for (int i = 0; i < k_things; i++){ best_choice[i]=arr[i]; }
    // calc time
    int time=0;
    for (int i = 0; i < n_chores; i++)
    {
        if(i < k_things){
            time += x_maxtime;}
        else{
            time += arr[i];
        }
    }
    return time;
}

int main(){
    cin >>n_chores>> k_things>> x_maxtime;
    int times[n_chores];
    for (int i = 0; i < n_chores; i++){
        cin >> times[i];
    }
    cout << luba_performance(times);
}