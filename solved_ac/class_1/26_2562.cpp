#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    int bigNum = -1, idx, tmp;

    for(int i = 0; i < 9; i++){
        cin >> tmp;

        if(bigNum < tmp){
            bigNum = tmp;
            idx = i+1;
        }
    }

    cout << bigNum << '\n';
    cout << idx << '\n';

    return 0;
}