#include <iostream>
#include <algorithm>
using namespace std;
// funcs and structs
int comp(string s1, string s2){    
    for (int i = 0; i < size(s1); i++){
        char c1 = (s1[i] < 'a') ? s1[i] + 32 : s1[i];
        char c2 = (s2[i] < 'a') ? s2[i] + 32 : s2[i];
        
        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
    }
    return 0;
}

int main(){
    string s1,s2; cin >> s1 >> s2;
    cout << comp(s1 , s2);

}

// my old ans in comp func!!
            // if(s1[i] < 97){
            //     s1[i] +=32;
            // }
            // if(s2[i] < 97){
            //     s2[i] +=32;
            // }
            // sum1 +=s1[i];
            // sum2 +=s2[i];
            //}
                // if(sum1 > sum2){return 1;} 
                // if(sum1 < sum2){return -1;} 
                // if(sum1 == sum2){return 0;} 