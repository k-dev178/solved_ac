#include <bits/stdc++.h>
using namespace std;

bool isInt(string &s);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    /* =========================================== */

    unordered_map<int, string> mp1;
    unordered_map<string, int> mp2;
    int n,m;
    string tmp_string;

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> tmp_string;
        mp1[i+1] = tmp_string;
        mp2[tmp_string] = i+1;
    }

    for(int i = 0; i < m; i++){
        cin >> tmp_string;

        if(isInt(tmp_string)){
            cout << mp1[stoi(tmp_string)] << '\n';
        } else{
            cout << mp2[tmp_string] << '\n';
        }
    }
    return 0;
}

bool isInt(string &s) {
    for(char c : s)
        if(!isdigit(c)) return false;
    return true;
}