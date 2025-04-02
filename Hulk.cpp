#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int j = 1; j <= n; j++){

    if(j % 2 ==0){
        cout<<"I love";
    }else{
        cout<<"I hate";        
    }

if(j < n){
    cout <<" that ";}
else if(j = n){
    cout<<" it";
}


}


}