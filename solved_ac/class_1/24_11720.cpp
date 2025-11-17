#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    string s;
    int n,result;

    cin >> n;
    cin >> s;

    result = 0;
    
    for(int i = 0; i < n; i++)
        result += s[i] - '0';

    cout << result << '\n';

    return 0;
}