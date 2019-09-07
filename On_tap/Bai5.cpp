#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int i;
		int dem = 0;
		for (i = 2; i <= n; i++) {
        while(n % i == 0) {
            dem++;
            n /= i;
        }
        if(dem > 0) cout << i << "(" << dem << ") ";
        dem = 0;
	    }
	    if(n > 1) cout << n << "(1) ";
	    cout << endl;
	}
    return 0;
}

