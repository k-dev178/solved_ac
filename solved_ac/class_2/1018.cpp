#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string tmp_s;
    cin >> n >> m;

    vector<string> v;
    for (int i = 0; i < n; i++){
        cin >> tmp_s;
        v.push_back(tmp_s);
    }
    
    char target[2] = {'W','B'};
    int count = 64;

    for (int a = 0; a <= n - 8; a++) {
        for (int b = 0; b <= m - 8; b++) { 
            int w = (v[a][b] == 'W') ? 0 : 1;
            int cnt = 0;

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (v[a + i][b + j] != target[(i + j + w) % 2]) 
                        cnt++;
                }
            }
          
            int bestHere = min(cnt, 64 - cnt);
            count = min(count, bestHere);
        }
    }

    cout << count << "\n";

    return 0;
}