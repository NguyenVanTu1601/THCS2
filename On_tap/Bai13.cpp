#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int kt = 1;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				cout << "NO" << endl;
				kt = 0;
				break;
			}
		}
		if(kt == 1) cout << "YES" << endl;
	}
    return 0;
}

