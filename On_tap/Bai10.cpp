#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int le = 0;
		int chan = 0;
		while(n != 0){
			int i = n % 10;
		    if(i % 2 == 0) chan++;
		    else le++;
		    n /= 10;
		}
		cout << le << " " << chan << endl;
	}
	
    return 0;
}

