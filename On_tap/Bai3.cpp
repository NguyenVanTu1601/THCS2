#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	long long t = 1;
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		t = t * i;
		sum += t;
	}
	cout << sum;
    return 0;
}

