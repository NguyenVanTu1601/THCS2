#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long Fibo(int n){
	if(n == 1 || n == 2) return 1;
	else return Fibo(n-1) + Fibo(n-2);
}
main(){
	int t;
	cin >> t;
	int n;
	long long F[93];
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= 92; i++) F[i] = F[i-1]+F[i-2];
	while(t--){
		cin >> n;
		cout << F[n] << endl;
	}
    return 0;
}

