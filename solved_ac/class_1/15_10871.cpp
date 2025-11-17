#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v;
    int n,x,tmp;

    cin >> n >> x;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp < x)
            v.push_back(tmp);
    }
    
    for (int i = 0; i < v.size(); i++) 
       cout << v[i] << " ";

    return 0;
}