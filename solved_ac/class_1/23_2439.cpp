#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    int n;

    cin >> n;
    
    /* 별 출력 */
    for(int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++)
            cout << ' ';

        for(int j = 0; j < i+1; j++)
            cout << '*';
            
        cout << '\n';
    }

    return 0;
}