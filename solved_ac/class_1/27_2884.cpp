#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    int h,m,total;

    cin >> h >> m;

    if(h == 0 && m < 45) h = 24;
    total = (h * 60 + m - 45);   
    
    h = total / 60;
    m = total % 60;
    
    cout << h << ' ' << m << '\n';

    return 0;
}