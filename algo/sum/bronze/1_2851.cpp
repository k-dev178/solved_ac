#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    vector<int> s;
    int tmp,ans;

    //누적합 구하기
    for(int i = 0; i < 10; i++){
        cin >> tmp; // tmp로 임시로 입력

        /* 누적합 하면서 pushback */
        if(i == 0) s.push_back(tmp); 
        else s.push_back(tmp + s[i-1]);
    }

    //답 구하기
    ans = 0;
    for(int i = 0; i < 10; i++){
        if(abs(s[i] - 100) < abs(ans - 100)){ //s[i]가 ans보다 100에 가까우면 치환.
            ans = s[i];
        } else if(abs(s[i] - 100) == abs(ans - 100)){ // 차이가 같으면 둘중 수가 더 큰거.
            ans = max(ans,s[i]);
        }
    }
    
    //답 출력.
    cout << ans << '\n';

    return 0;
}