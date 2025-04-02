#include <iostream>
using namespace std;
int main(){

// intput num of body and tentacles
int n;
cin >>n;
int rows =n;
int colu =2*n-1;

// make pattern of body 
for(int U = 0; U < rows; U++){
    for(int j = 0; j < colu; j++){
        cout <<"J";
    }
    cout<<"\n";
}
// make pattern of tentacles 

for(int c = 0; c < rows; c++){
    for(int s = 0; s < n; s++){
        cout <<"S ";
    }
    cout<<"\n";
}


}