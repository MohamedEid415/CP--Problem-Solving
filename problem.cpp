#include <iostream>
#include <algorithm>
using namespace std;

int main(){

int n;
int how_num =0;
int k;
cin >> n>>k;
int arr[n];

for(int l = 0; l < n; l++){
cin >> arr[l];}

for(int y= 0; y <n; y++){
    if(arr[y] % k ==0){
        how_num +=1;}}
        
cout<<how_num;
}



