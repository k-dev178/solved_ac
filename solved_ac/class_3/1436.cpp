#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	/* =========================================== */

	int n,isAns,result;
	string s;

	cin >> n;

	for(int i = 100; ; i++){
		s = to_string(i);
		
		isAns = 0;
		for(int j = 0; j <= s.length()-3; j++){
			if((s[j] == '6' && s[j+1] == '6') && s[j+2] == '6'){
				isAns = 1;
				break;
			}
		}

		if(isAns == 1){
			n--;
		}

		if(n == 0){
			result = i;
			break;
		}
	}

	cout << result << '\n';
    
    return 0;
}