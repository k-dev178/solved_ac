#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    bool b;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        stack<char> stack;
        
        b = true;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '('){
                stack.push(s[j]);
            } else{ // c == ')'
                if(stack.empty()){
                    b = false;
                    break;
                }
                stack.pop();
            }
        }

        cout << ((b && stack.empty()) ? "YES" : "NO") << "\n";
    }

    return 0;
}