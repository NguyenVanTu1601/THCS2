#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}
main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int x;
		for(int i = 1; i <= n; i++){
			cin >> x;
			if(nt(x) == 1 ){
				cout << x << " ";
			}
		}
		cout << endl;
	}
    return 0;
}

