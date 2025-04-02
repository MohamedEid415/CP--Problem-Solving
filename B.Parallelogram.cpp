#include <iostream>
#include <set>
#include <map>
#include <cmath>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
        int freq[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			freq[arr[i]]++;
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if(freq[i] >= 2){
				count++;
			}
		}
		if(count >= 4){
			cout << "YES";
		}else{
			cout << "NO";
		}
    }
}