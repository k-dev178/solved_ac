#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	/* =========================================== */

    int n;
    cin >> n;

    int cnt = 0;

    // for (int i = 1; i <= n; i++) {
    //     if(i % 5 == 0)
	// 		cnt++;
    // }

	for (int i = 5; i <= n; i *= 5) {
		for(int j = i; j <= n; j++){
			if(j % i == 0)
				cnt++;
		}
    }
	// if 25
	// 5
	// 10
	// 15
	// 20
	// 25 => 5*5
	
	// if 100
	// 5
	// 10
	// 15
	// 20
	// 25 => 5*5
	// 30 =? 
	// 35
	// 40
	// 45
	// 50
	// 55
	// 60
	// ...
	// 100 => 5*5*5

    cout << cnt << "\n";

    return 0;
}
