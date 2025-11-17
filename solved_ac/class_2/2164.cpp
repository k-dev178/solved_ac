#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int num,tmp;

    cin >> num;
    for(int i = 0; i < num; i++){
        q.push(i+1);
    }

    if(q.size() != 1){
        while(true){
            q.pop();

            if(q.size() <= 1)
                break;
            
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }
    
    cout << q.front();

    return 0;
}