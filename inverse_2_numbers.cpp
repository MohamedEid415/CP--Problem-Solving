#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >>n;
int arr[n];
    int where_min;
    int where_max;

    for(int f=0; f<n; f++){
        cin>> arr[f];
    }
int l = *min_element(arr, arr + n);
int Q = *max_element(arr, arr + n);

for(int o = 0; o < n; o++){
if(l == arr[o]){
    where_min = o;
}
}
for(int r = 0; r < n; r++){
if(Q == arr[r]){
    where_max = r;
}
}

cout <<"\nmax value = "<<Q<<" min value = "<<l;
cout <<"\n her index poision= "<<where_max<<" "<<where_min<<"\n";

swap(arr[where_max],arr[where_min]);

cout<<"new arrey is [";
for(int z=0; z < n; z++){
    cout<< arr[z]<<", ";
}
cout<<"]";




}



