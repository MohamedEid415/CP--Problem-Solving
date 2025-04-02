#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs
int n_Oranges, m_maxsize, s_juicersize;
int empatytimes(int arr[]){
    int times = 0;
    long long sum =0;
    for (int i = 0; i < m_maxsize; i++)
    {
        if(arr[i] <= m_maxsize){
            sum += arr[i];
        }
        if(sum >= s_juicersize){
        sum = 0;
        times++;
        }
    }
    return times;
}

int main(){
    cin >> n_Oranges>>m_maxsize>> s_juicersize;
    int oranges[n_Oranges];
    for (int i = 0; i < n_Oranges; i++){cin >> oranges[i];}

    cout << empatytimes(oranges);
}