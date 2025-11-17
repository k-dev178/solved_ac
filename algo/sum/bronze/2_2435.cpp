#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    int n,k,tmp;
    int arr[50];
    vector<int> sum;

    cin >> n >> k;

    // 데이터 받기
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr[i] = tmp;
    }

    // k번씩 누적합
    for(int i = 0; i <= n-k; i++){
        tmp = 0;

        //누적합
        for(int j = 0; j < k; j++){
            tmp += arr[j+i];
        }

        //pushback
        sum.push_back(tmp);
    }

    // 출력
    cout << *max_element(begin(sum),end(sum)) << ' ';

    return 0;
}