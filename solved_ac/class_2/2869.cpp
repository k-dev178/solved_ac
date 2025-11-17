#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,v;
    int day;

    cin >> a >> b >> v;
    
    if((v-b) % (a-b) == 0) // 6-5 % 5-1 = 1 % 1, 5-2 % 2-1 = 3 % 1
        cout << (v-b) / (a-b) << "\n";
    else
        cout << (v-b) / (a-b) + 1 << "\n";

    return 0;
}