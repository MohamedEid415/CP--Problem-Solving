#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// funcs and structs
int n_Songs;
long long m_maxsize; 
int storaging(long long songs[] , long long atfer_com[]){
    sort(songs, songs + n_Songs, greater());
    sort(atfer_com, atfer_com + n_Songs, greater());
    int sum =0, cnt =0;
    // out -1
    for (int i = 0; i < n_Songs; i++){ sum += songs[i]; }
    if(sum <= m_maxsize) {return cnt;}
    // else:

    while(sum > m_maxsize){
    sum = 0;
    songs[cnt] = atfer_com[cnt];
    cnt++;
    if (cnt == n_Songs){return -1;}
    for (int i = 0; i < n_Songs; i++){ sum += songs[i];}
    }

    return cnt;
}

int main(){
    cin >> n_Songs >> m_maxsize;
    long long songs[n_Songs];
    long long a_compressd[n_Songs];
    for (int i = 0; i < n_Songs; i++)
    {
        cin >> songs[i] >> a_compressd[i];
    }
    
    cout << storaging(songs , a_compressd);
}