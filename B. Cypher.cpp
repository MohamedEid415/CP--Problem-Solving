#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int fin_NUM; cin >> fin_NUM;
        int arr[fin_NUM];
        for (int i = 0; i < fin_NUM; i++)
        {
            cin >> arr[i]; // 9 3 1
        }
        for (int i = 0; i < fin_NUM; i++)
        {
            int on; string mOCC;
            cin >> on >> mOCC;
            for (int j = 0; j < on; j++)
            {
                if (mOCC[j] == 'U')
                {
                    arr[i] = (arr[i] - 1 + 10)%10;
                }else{
                    arr[i] = (arr[i] + 1)%10;
                }
                
            }
        }
        for (int i = 0; i < fin_NUM; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}