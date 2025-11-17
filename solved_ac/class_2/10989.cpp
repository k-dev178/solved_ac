#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    int n,tmp;
    int count[10001] = {0};

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        count[tmp]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while(count[i]--){
            cout << i << '\n';
        }
    }

    return 0;
}