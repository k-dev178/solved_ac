#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n,tmp,result;

    //입력
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end()); //오름차순
    
    //구간합
    tmp = 0;

    for(int i = 0; i < n; i++){
        result = 0;
        for(int j = 0; j < i+1; j++){
            tmp += v[j];
        }
        result += tmp;
    }

    // 출력
    cout << result << "\n";

    return 0;
}