#include <iostream>
using namespace std;
int main(){

// make arr within robots fri.
int n_robo;
cin >> n_robo;
int Robots[n_robo];
for(int u = 0; u < n_robo; u++){cin>>Robots[u];}

int mega_robo=0;
for (int d = 0; d < n_robo; d++)
{mega_robo += Robots[d];}

cout<<mega_robo;

}