#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int sum = 0;
		while(n != 0){
			sum += n % 10;
			n = n / 10;
		}
		if(sum % 10 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
    return 0;
}

