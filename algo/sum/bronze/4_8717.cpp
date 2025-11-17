#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */
    
    int n,tmp,ans;
    vector<int> sum;

    cin >> n;

    // 누적합
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(i == 0)
            sum.push_back(tmp);
        else
            sum.push_back(tmp + sum[i-1]);
    }

    // ans 초기값 설정
    ans = abs(sum[0]-(sum.back()-sum[0]));

    // ans 값 찾기
    for(int i = 1; i < n-1; i++){
        if(ans > abs(sum[i]-(sum.back()-sum[i])))
            ans = abs(sum[i]-(sum.back()-sum[i]));
    }

    //출력
    cout << ans << '\n';

    // 1 3 6 10 15 21
    // a 
    // a+b 
    // a+b+c
    // a+b+c+d
    // a+b+c+d+e
    // a+b+c+d+e+f

    return 0;
}