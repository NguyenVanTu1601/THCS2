#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	string s;
	cin.ignore();
	while(t--){
		getline(cin,s);
		int i = 0;
		int j = s.length() - 1;
		int dem = 0;
		int kt = 0;
		while(i <= j){
			if(s[i] != s[j]) dem++;
			i++;
			j--;
			if(dem >= 2){
				kt = 1;
				break;
			}
		}
		
		if(dem == 1) cout << "YES" << endl;
		else if(dem == 0 && s.length() %2 != 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}

