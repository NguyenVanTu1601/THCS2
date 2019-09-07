#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	long long a, b;
	cin >> a >> b;
	long long r;
	long long sum = a * b;
	while(b > 0){
		r = a % b;
		a = b;
		b = r;
	}
	cout << a << endl;
	cout << sum / a;
    return 0;
}

