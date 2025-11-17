#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,tmp;
    queue<int> q;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        q.push(i+1);
    }

    cout << "<";
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < k-1; i++){
            tmp = q.front();
            q.pop();

            q.push(tmp);
        }

        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">" << "\n";

    return 0;
}

// 3 4 5 6 7 1 2
//