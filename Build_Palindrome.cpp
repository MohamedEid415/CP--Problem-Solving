#include <iostream>
using namespace std;
int main() {
    
    int original;
    int num;
    int reversed = 0;
    cin >> original;
    // num = 123 ~~> 321 = converted
    // 123 % 100 = 321
    
    num = original;
    
    if(101 <= num <= 999){
        reversed += (num % 10)*100;
        num /= 10;
        reversed += (num % 10)*10;
        num /= 10;
        reversed += (num % 10);
        
        
        if(original == reversed){
            cout <<reversed;
        }
        else{
                cout <<"Imposible";
        }
    }
    return 0;
}