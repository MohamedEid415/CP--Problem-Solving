#include <bits/stdc++.h>
using namespace std;

int main() {
    long long id; cin >> id;
    string d1, d2; cin >> d1 >> d2;
    if(id % 10 == 0) id--;
    int day = (id / 10)%6;
    
    string days[6] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};

    if(days[day] == d1 && days[(day+1)%6] == d2){
        cout << days[(day +2)%6];
        return 0;
    }
    if (days[day] == d1){
        cout << days[(day+1)%6];
        return 0;
    }
    if (days[day] == d2){
        cout << days[(day+1)%6];
        return 0;
    }

   cout << days[day];
}

