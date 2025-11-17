#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    vector<vector<int>> v;
    int t,k,n;

    v[0] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> k >> n;

        for(int j = 1; j < k; j++){
            for(int m = 0; m < n; m++){
                if(m < 2){
                    v[j].push_back(v[j-1][m]);
                } else{
                    v[j].push_back(v[m-1][m-1] + v[m-1][m-2]);
                }
            }
        }

        cout << v[k][n] << '\n';
    }   

    return 0;
}
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
// 0 1 3 