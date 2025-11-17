#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tmp,c;
    vector<int> v;

    ios::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        
        //이진탐색
        cout << upper_bound(v.begin(),v.end(),tmp) - lower_bound(v.begin(),v.end(),tmp) << " "; // 2 - 0
    }

    return 0;
}