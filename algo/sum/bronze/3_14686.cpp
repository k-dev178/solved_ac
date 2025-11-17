#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */
    
    vector<int> Swift, Semaphores;
    int k,tmp;

    cin >> k;
    Swift.push_back(0);
    Semaphores.push_back(0);
    
    // Swift 입력
    for(int i = 0; i < k; i++){
        cin >> tmp;
        Swift.push_back(tmp + Swift[i]);
    }

    // Semaphores 입력
    for(int i = 0; i < k; i++){
        cin >> tmp;
        Semaphores.push_back(tmp + Semaphores[i]);
    }

    // 출력
    for(int i = k; i >= 0; i--){
        if(Swift[i] == Semaphores[i]){
            cout << i << '\n';
            break;
        }
    }

    return 0;
}