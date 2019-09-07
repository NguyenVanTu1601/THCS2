#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int tn(int n){
	int s = n;
	int sum = 0;
	while(n != 0){
		int i = n % 10;
		n = n / 10;
		sum = sum * 10 + i;
	}
	if(sum == n) return 1;
	else return 0;
}

int nt(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n > 2){
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}

main(){
	int t;
	cin >> t;
	int a, b;
	while(t--){
		cin >> a >> b;
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(tn(i) == 1){
				if(nt(i) == 1){
					dem++;
					if(dem % 10 != 1 && dem != 1) cout << endl;
					else cout << i << " ";
				}
			}
		}
		if(dem % 10 == 1) cout << endl;
		else cout << endl << endl;
	}
    return 0;
}

